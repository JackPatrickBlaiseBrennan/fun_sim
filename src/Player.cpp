#include "Player.hpp"
#include <cstdio>

Player::Player(int identifier): id(identifier), position({1000, 1000})
{
}

Player::~Player()
{
}

void Player::MoveUp(){
    position.y -= speed; 
}

void Player::MoveDown(){
    position.y += speed; 
}

void Player::MoveLeft()
{
    position.x -= speed;
}

void Player::MoveRight()
{
    position.x += speed;  
}

Vector2 Player::getPosition() const
{
    return position;
}

int Player::getId() const
{
    return id;
}