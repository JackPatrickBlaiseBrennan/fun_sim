#ifndef PLAYERS_RENDERER_HPP
#define PLAYERS_RENDERER_HPP

#include "Player.hpp"
#include <map>

class PlayersRenderer
{
    public:
        PlayersRenderer(/* args */);
        ~PlayersRenderer();
        void addNewPlayer(Player* player);
        void renderPlayers();
    private:
        std::map<int, Player*> playerMap;
        int id;
        void renderPlayer(Player* player);
};

#endif