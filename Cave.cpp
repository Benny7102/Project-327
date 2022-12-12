#include "Cave.h"

using namespace std;


int randnum()
{
    int choice_num = rand() % 3;
}

void Cave::pathChoice(mc* player, char choice):Minotaur::Minotaur():Ghost::Ghost()
{
    cin >> choice;
    while (choice == 'a' || choice == 'b' || choice == 'c')
    {
        if (choice == 'a')
        {
            if (choice_num == 0)
            {
                player -> Minotaur();
            }
            else if(choice_num == 1)
            {
                player -> Ghost();
            }
            else
            {
                player -> add_Gold();
                player -> add_Gold();
                cout << "You have found hidden treasure what a lucky person!" << endl;
            }
        }
        else if (choice == 'b')
        {
            if (choice_num == 0)
            {
                player -> Minotaur();
            }
            else if(choice_num == 1)
            {
                player -> Ghost();
            }
            else
            {
                player -> add_Gold();
                player -> add_Gold();
                cout << "You have found hidden treasure what a lucky person!" << endl;
            }
        }
        else if (choice == 'c')
        {
            if (choice_num == 0)
            {
                player -> Minotaur();
            }
            else if(choice_num == 1)
            {
                player -> Ghost();
            }
            else
            {
                player -> add_Gold();
                player -> add_Gold();
                cout << "You have found hidden treasure what a lucky person!" << endl;
            }
        }
        else
        {
            cout << "Not a path Enter another choice:" << endl;
            cin >> choice;
        }
    }
}