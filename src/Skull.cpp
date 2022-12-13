#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "mc.h"
#include "Skull.h"
#include "enemy.h"

Skull::Skull():enemy(30, 15, 60, 20)
{
    srand(time(NULL));
    health = rand() % 30 + 15;
    damage = rand() % 60 + 20;
}