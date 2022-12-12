#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "mc.h"

using namespace std;

mc::mc()
{
    health = 200;
    damage = 20;
    treasure = 0;
    gold = 0;
}

mc::mc(int h, int d)
{
    health = h;
    damage = d;
    treasure = 0;
    gold = 0;
}

void mc::remove_health(int d)
{
    health = health - d;
}

void mc::healing(int h)
{
    health = health + h;
}

void mc::add_damage(int d)
    {
        damage = damage + d;
    }

void mc::remove_damage(int d)
{
    damage = damage - d;
}

void mc::add_treasure()
{
    srand (time(NULL));
    int random =1 + (rand() %3);
    treasure = treasure + random;
}

void mc::remove_gold(int cost)
{
    gold = gold - cost;
}

void mc::add_gold()
{
    srand (time(NULL));
    int random =1 + (rand() %21);
    gold = gold + random;
}

int mc::returnwin()
{
    return treasure;
}

bool mc::killed()
{
    if (health < 0){
        return false;
    }
    else{
        return true;
    }
}

int mc::attack()
{
    return damage;
}


void mc::showstatus()
{
    cout << "Player Status" << endl;
    cout << "health: " << health << endl;
    cout << "attack damage: " << damage << endl;
    cout << "gold: " << gold << endl;
    cout << "treasure: " << treasure << endl;
}

