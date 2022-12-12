#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "mc.h"
#include "Rogueknight.h"
#include "enemy.h"

using namespace std;

Rogueknight::Rogueknight():enemy(150, 120, 10, 5)
{
    srand(time(NULL));
    health = rand() % 120 + 100;
    damage = rand() % 45 + 25;
}