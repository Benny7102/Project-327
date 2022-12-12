#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
using namespace std;
#include "mc.h"
#ifndef ENEMY_H
#define ENEMY_H
class enemy
{
    private:
        int health;
        int damage;
    public:
        enemy();
        void taken(mc* player);
        void dealt(mc* player);
        bool ifDefeated();
        void showStatus();
}