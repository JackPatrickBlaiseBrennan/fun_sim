#include "PlayersRenderer.hpp"
#include <cstdio>

PlayersRenderer::PlayersRenderer(){}

PlayersRenderer::~PlayersRenderer(){}

void PlayersRenderer::addNewPlayer(Player* player)
{
    playerMap.insert({player->getId(), player});
}
void PlayersRenderer::renderPlayers()
{
    std::map<int, Player*>::iterator iter;
    for (iter = playerMap.begin(); iter != playerMap.end(); ++iter)
    {
        renderPlayer(iter->second);
    }
}
       
void PlayersRenderer::renderPlayer(Player* player)
{
    DrawRectangleV(player->getPosition(), {10, 10}, RED);
}