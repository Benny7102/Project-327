#include <iostream>
#include <math.h>
#include <string>
using namespace std;
#include "enemy.h"

enemy::enemy(int r1, int e1, int r2, int e2)
{
    srand(time(NULL));
    health = rand() % r1 + e1;
    damage = rand() % r2 + e2;
}
void enemy::taken(mc* player)
{
    health-=(player->attack());
}

void enemy::dealt(mc* player)
{
   player->remove_health(damage);
}

bool enemy::ifDefeated(mc* player)
{
    if (health <= 0)
    {
        health = 0;
        cout << "The enemy has been defeated!" << endl;
        player-> add_gold();
        return true;
    }
    else
    {
        return false;
    }
}
void enemy::showStatus()
{
    cout << "Health: " << health << endl;
    cout << "Damage: " << damage << endl;
}

