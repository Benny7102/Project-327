#include "Ghost.h"
Ghost::Ghost():enemy(75, 50, 50, 25)
{
    srand(time(NULL));
    health = rand() % 75 + 50;
    damage = rand() % 50 + 25;
}