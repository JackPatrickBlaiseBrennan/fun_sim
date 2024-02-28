/*******************************************************************************************
*
*   raylib template for simulation
*
*   raylib is licensed under an unmodified zlib/libpng license (View include/raylib.h for details)
*
*
********************************************************************************************/

#include <iostream>
#include <stdio.h>
#include "include/raylib.h"
#include "src/PlayerController.hpp"
#include "src/PlayersRenderer.hpp"


int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1920;
    const int screenHeight = 1080;

    PlayersRenderer playersRender;

    Camera2D camera = { 0 };
    PlayerController playerController;
    Player* playerPtr = playerController.getPlayerPtr();
    playersRender.addNewPlayer(playerPtr);

    camera.target = playerPtr->getPosition();
    camera.offset = Vector2{ screenWidth/2.0f, screenHeight/2.0f };
    camera.rotation = 0.0f;
    camera.zoom = 1.0f;

    InitWindow(screenWidth, screenHeight, "Fun A.I. Sim");

    SetTargetFPS(60);  

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("Press enter to start", ((screenWidth / 2) - 220), (screenHeight / 2), 40, GRAY);
            EndDrawing();

        if (IsKeyPressed(KEY_ENTER)){
            while(!WindowShouldClose()){
                BeginDrawing();

                ClearBackground(RAYWHITE);

                BeginMode2D(camera);

                playerController.updatePosition();
                playersRender.renderPlayers();

                EndMode2D();

                EndDrawing();
            }
        }

    }

    // De-Initialization

    CloseWindow();

    return 0;
}
