#include "options.h"
#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

void shrine(mc* player)
{
    srand(time(NULL));
    int num = rand() % 5;
    char choice;
    cout << "Do you want to pray? (y/n)" << endl;
    cin >> choice;
    while((choice != 'y') && (choice != 'n')){
        cout << "Please make a choice:(y/n)";
        cin >> choice;
    }
    if (choice == 'y')
    {
        player->add_damage(num);
    }
    else
    {
        cout << "Too bad" << endl;
    }
}

void fountain(mc* player)
{
    srand(time(NULL));
    int num = 1 + (rand() %10);
    char choice;
    cout << "Do you want to throw in coins? (y/n)" << endl;
    cin >> choice;
    while((choice != 'y') && (choice != 'n')){
        cout << "Please make a choice:(y/n)";
        cin >> choice;
    }
    if (choice == 'y')
    {

        int sacrifice = 1 + (rand() %2); 
        if(sacrifice == 1)
        {
            player->healing(num);
            player->remove_gold(5);
        }
        else
        {
            player->add_damage(num);
            player->remove_gold(5);
        }
    }
    else 
    {
        cout << "Too bad" << endl;
    }
}
void arena(mc* player)
{
    char choice;
    cout << "Do you want to enter an arena? (y/n)" << endl;
    cin >> choice;
    while((choice != 'y') && (choice != 'n')){
        cout << "Please make a choice:(y/n)";
        cin >> choice;
    }
    if (choice == 'y')
    {
        srand(time(NULL));
        int foe_health = rand() % 100 + 50;
        cout << "Your foe has been selected, if you win you shall get gold otherwise you take damage." << endl;
        if ((player->attack()) > foe_health)
        {
            int chance = rand()% 5 + 1;
            for (int i = 0; i < chance; i++)
            {
                player->add_gold();
            }
        }
        else{
            cout << "Your opponent was stronger then you" << endl;
            player -> remove_health(10);
        }
    }
    else
    {
        cout << "You need some bigger guts!" << endl;
    }
}

void chest(mc* player)
{
    char choice;
    cout << "Do you want to open a chest? (y/n)" << endl;
    cin >> choice;
    while((choice != 'y') && (choice != 'n')){
        cout << "Please make a choice:(y/n)";
        cin >> choice;
    }
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
    while((choice != 'y') && (choice != 'n')){
        cout << "Please make a choice:(y/n)";
        cin >> choice;
    }
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
        else
        {
            player->healing(20);
            player->remove_gold(20);
        }
    }
    else
    {
        cout << "You do not want medicine." << endl;
    }
}

void grave(mc* player)
{
    char choice;
    cout << "Do you want to rob a grave? (y/n)" << endl;
    cin >> choice;
    while((choice != 'y') && (choice != 'n')){
        cout << "Please make a choice:(y/n)";
        cin >> choice;
    }
    srand(time(NULL));
    int num = rand() % 10 + 5;
    if (choice == 'y')
    {
        player->add_gold();
        player->remove_health(num);
    }
    else
    {
        cout << "Good decision!" << endl;
    }
}