#include "PlayerController.hpp"
#include <cstdio>

PlayerController::PlayerController() : controllablePlayer(30){}

PlayerController::~PlayerController(){}

void PlayerController::updatePosition()
{
    if (IsKeyDown(KEY_LEFT))
    {
        controllablePlayer.MoveLeft();
    }
    if (IsKeyDown(KEY_RIGHT)) { 
        controllablePlayer.MoveRight(); 
    }
    if (IsKeyDown(KEY_UP)) {
        controllablePlayer.MoveUp();   
    }
    if (IsKeyDown(KEY_DOWN)) {
        controllablePlayer.MoveDown();
    }    
}
    
Player* PlayerController::getPlayerPtr() { return &controllablePlayer;}
