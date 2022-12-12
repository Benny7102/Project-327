#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include "mc.h"

class enemy
{
    protected:
        int health;
        int damage;
    public:
        enemy(int, int, int, int);
        void taken(mc* player);
        void dealt(mc* player);
        bool ifDefeated();
        void showStatus();
};

#endif