
#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "include/raylib.h"

class Player
{
private:
    /* data */
    int id;
    static constexpr float speed = 2.0f;
    Vector2 position;


public:
    Player(int identifier);
    ~Player();

    void MoveUp();
    void MoveDown();
    void MoveLeft();
    void MoveRight();

    Vector2 getPosition() const;
    int getId() const;
};

#endif
