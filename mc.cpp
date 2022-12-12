#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "mc.h"

using namespace std;

mc::mc()
{
    health = 200;
    damage = 20;
    treasure = 0;
    gold = 0;
}

mc::mc(int h, int d)
{
    health = h;
    damage = d;
    treasure = 0;
    gold = 0;
}

mc::remove_health()