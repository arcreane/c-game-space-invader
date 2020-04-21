//
//  player.hpp
//  space_invader_cpp
//
//  Created by Yoel on 21/04/2020.
//  Copyright © 2020 space_invader_cpp. All rights reserved.
//

#ifndef player_hpp
#define player_hpp

#include <stdio.h>
#include <string>
#include "droable.hpp"

class Player
{
    public:
    
    void ennemiShoots() const;
    //Méthode qui herite de la class droable
    
    void setScore(int number);
    int score();
    void setShoots(int number);
    int shoots();
    void setLife(int number);
    int life();
    void setName(std::string newName);
    std::string name();
    
    private:
    
    int _score;
    int _shoots;
    int _life;
    std::string _name;
};

#endif /* player_hpp */
