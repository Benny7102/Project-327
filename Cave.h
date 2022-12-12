#ifndef Cave_H
#define Cave_H
#include "Minotaur.h"
#include "Ghost.h"
#include "enemy.h"
#include "mc.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;
class Cave
{
    public:
    int choice_num;
    pathChoice(mc* player, char);
}
int randnum();