#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "mc.h"
#include "Ghost.h"
#include "enemy.h"

Ghost::Ghost():enemy(75, 50, 25, 5)
{
    srand(time(NULL));
    health = rand() % 75 + 50;
    damage = rand() % 25 + 5;
}