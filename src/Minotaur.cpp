#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "mc.h"
#include "Minotaur.h"
#include "enemy.h"

using namespace std;

Minotaur::Minotaur():enemy(150, 100, 10, 5)
{
    srand(time(NULL));
    health = rand() % 150 + 100;
    damage = rand() % 10 + 5;
}