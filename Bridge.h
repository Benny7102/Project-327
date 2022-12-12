#ifndef Bridge_H
#define Bridge_H
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "mc.h"

class Bridge
{
    public:
    int bridge_num;
	void BridgeCondition(mc* player);
};

int randnum(int, int);
#endif
