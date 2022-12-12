#ifndef Cave_H
#define Cave_H
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include "mc.h"

using namespace std;
class Cave
{
    public:
    int choice_num;
    void pathChoice(mc* player, char);
};
int randnum();
#endif