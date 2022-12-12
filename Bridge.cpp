#include "Bridge.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;


void BridgeCondition(mc* player)
{
    int bridge_num = (rand() %3);
    if (bridge_num == 0)
    {
        cout << "The bridge has collapsed behind you. You have fallen great heights." << endl; 
        player -> remove_health(100000);
    }
    else if (bridge_num == 1)
    {
        cout << "The bridge has collapsed." << endl;
        player -> remove_health(5);
        player -> remove_damage(3);
        cout << "There is something at the bottom of this valley." << endl;
        player -> add_treasure();
    }
    else
    {
        cout << "You were able to cross successfully!" << endl;
    }
}
