#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "mc.h"
#include "Rogueknight.h"
#include "enemy.h"

using namespace std;

Rogueknight::Rogueknight():enemy(100, 80, 45, 25)
{
    srand(time(NULL));
    health = rand() % 100 + 80;
    damage = rand() % 45 + 25;
}