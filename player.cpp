//
//  player.cpp
//  space_invader_cpp
//
//  Created by Yoel on 21/04/2020.
//  Copyright © 2020 space_invader_cpp. All rights reserved.
//

#include "player.hpp"

#include <iostream>

using namespace std;

void Player::setScore(int newScore)
{
    if (_score < 0) //Pour éviter d'avoir un score négatif
    {
        _score = 0; //On met le score à 0
    }
    
    if (newScore) {
        _score++;
    }
    else {
         _score = 0;
    }
}

int Player::score()
{
    return _score;
}

void Player::setShoots(int shoots)
{
    _shoots = shoots;
}

int Player::shoots()
{
    return _shoots;
}

void Player::setLife(int life)
{
    _life = life;

}

int Player::life()
{
    return _life;
}

void Player::setName(string newName)
{
    _name = newName;
}

string Player::name()
{
    return _name;
}

int _score(0);
int _shoots(1000);
int _life(5);
string _name;
