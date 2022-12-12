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
    cout << "Your health decrease by " << d << ".";
    health = health - d;
}

void mc::healing(int h)
{
    cout << "Your health increase by " << h << ".";
    health = health + h;
}

void mc::add_damage(int d)
{
    cout << "Your damage increase by " << d << ".";    
    damage = damage + d;
}

void mc::remove_damage(int d)
{
    cout << "Your damage decrease by " << d << ".";
    damage = damage - d;
}

void mc::add_treasure()
{
    srand (time(NULL));
    int random =2 + (rand() %4);
    treasure = treasure + random;
    cout << "You have gain " << random << " treasures." << endl;
}

void mc::remove_gold(int cost)
{
    gold = gold - cost;
    cout << "Your gold amount decrease by " << cost << " gold." << endl;
}

void mc::add_gold()
{
    srand (time(NULL));
    int random =1 + (rand() %21);
    gold = gold + random;
    cout << "You have gain " << random << " gold." << endl;
}

int mc::returnwin()
{
    return treasure;
}

bool mc::killed()
{
    if (health <= 0){
        health = 0;
        return true;
    }
    else{
        return false;
    }
}

int mc::attack()
{
    cout << "You have dealt " << damage << " to the enemy!" << endl; 
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

