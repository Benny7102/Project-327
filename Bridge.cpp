#include "Bridge.h"

using namespace std;


int randnum(int num, int num2)
{
    int num = 0;
    int num2 = 2;

    int bridge_num = rand() % (num2 + 1 - num) + num;
}

void Bridge::BridgeCondition(mc* player)
{
    if (bridge_num == 0)
    {
        player -> removehealth(100000);
    }
    else if (bridge_num == 1)
    {
        player -> removehealth(5);
    }
    else
    {
        cout << "The bridge didn't break!" << endl;
    }
}
