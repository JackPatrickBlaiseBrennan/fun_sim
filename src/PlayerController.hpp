#ifndef PLAYER_CONTROLLER_HPP
#define PLAYER_CONTROLLER_HPP

#include "Player.hpp"

class PlayerController
{
private:
    /* data */
    Player controllablePlayer;
public:
    PlayerController(/* args */);
    ~PlayerController();
    void updatePosition();
    Player* getPlayerPtr();
};

#endif
