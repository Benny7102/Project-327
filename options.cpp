#include "options.h"

using namespace std;

void shrine(mc* player)
{
    srand(time(NULL));
    int num = rand() % 5;
    char choice;
    cout << "Do you want to pray? (y/n)" << endl;
    cin >> choice;
    if (choice == 'y')
    {
        player->add_damage(num);
    }
    else if (choice == 'n')
    {
        cout << "Too bad" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }
}
void fountain(mc* player)
{
    srand(time(NULL));
    int num = rand() % 10 + 5;
    char choice;
    cout << "Do you want to request for coins? (y/n)" << endl;
    cin >> choice;
    if (choice == 'y')
    {
        int sacrifice;
        cout << "What do you want to trade for coins?" << endl;
        cout << "Health (1)" << endl;
        cout << "Attack (2)" << endl;
        cin >> sacrifice;
        if (sacrifice == 1)
        {
            player->remove_health(num);
            player->add_gold();
        }
        else if (sacrifice == 2)
        {
            player->remove_damage(num);
            player->add_gold();
        }
        else
        {
            cout << "Invalid input" << endl;
        }
    }
    else if (choice == 'n')
    {
        cout << "Too bad" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }
}
void arena(mc* player)
{
    char choice;
    cout << "Do you want to enter an arena? (y/n)" << endl;
    cin >> choice;
    if (choice == 'y')
    {
        srand(time(NULL));
        int foe_health = rand() % 100 + 50;
        if ((player->attack()) > foe_health)
        {
            int chance = rand()% 5 + 1;
            for (int i = 0; i < chance; i++)
            {
                player->add_gold();
            }
        }
    }
    else if (choice == 'n')
    {
        cout << "You need some bigger guts!" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }
}
void chest(mc* player)
{
    char choice;
    cout << "Do you want to open a chest? (y/n)" << endl;
    cin >> choice;
    if (choice == 'y')
    {
        srand(time(NULL));
        int num = rand() % 2 + 1;
        if (num == 1)
        {
            player->add_treasure();
        }
        else if (num == 2)
        {
            int health_taken = rand() % 10 + 5;
            player->remove_health(health_taken);
        }
    }
    else if (choice == 'n')
    {
        cout << "Good decision!" << endl;
    }
}
void camp(mc* player)
{
    char choice;
    cout << "Do you want medicine? (y/n)" << endl;
    cin >> choice;
    if (choice == 'y')
    {
        int medicine;
        cout << "What medicine do you want?" << endl;
        cout << "Green Herb (5 gold) (1)" << endl;
        cout << "Red Herb (10 gold) (2)" << endl;
        cout << "Gold Herb (20 gold) (3)" << endl;
        cin >> medicine;
        if (medicine == 1)
        {
            player->healing(5);
            player->remove_gold(5);
        }
        else if (medicine == 2)
        {
            player->healing(10);
            player->remove_gold(10);
        }
        else if (medicine == 3)
        {
            player->healing(20);
            player->remove_gold(20);
        }
        else
        {
            cout << "Invalid input" << endl;
        }
    }
    else if (choice == 'n')
    {
        cout << "You do not want medicine" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }
}
void grave(mc* player)
{
    char choice;
    cout << "Do you want to rob a grave? (y/n)" << endl;
    cin >> choice;
    srand(time(NULL));
    int num = rand() % 10 + 5;
    if (choice == 'y')
    {
        player->add_gold();
        player->remove_health(num);
    }
    else if (choice == 'n')
    {
        cout << "Good decision!" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }
}