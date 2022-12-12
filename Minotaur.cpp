#include "Minotaur.h"
Minotaur::Minotaur():enemy(120, 100, 10, 5)
{
    srand(time(NULL));
    health = rand() % 120 + 100;
    damage = rand() % 10 + 5;
}