#include "Cave.h"

using namespace std;


int randnum()
{
    int choice_num = rand() % 3;
}

void Cave::pathChoice(mc* player, char choice):
{
    cin >> choice;
    bool x = true;
    while (x)
    {
        if (choice == 'a')
        {
            if (choice_num == 0)
            {
                player -> remove_health();
                player -> remove_damage();
                cout << "'COUGH COUGH' Poison... My strength is leaving me..."
            }
            else if(choice_num == 1)
            {
                player -> add_damage();
                cout << "Praying at the altar gives you a boost in strength! Choosing this path was a great idea!" << endl;
            }
            else
            {
                player -> remove_damage();
                cout << "I feel so tired. That path took too long to get through." << endl;
            }
        x = false;
        }
        else if (choice == 'b')
        {
            if (choice_num == 0)
            {
                player -> killed();
                cout << "A mysterious presence hates you...\n" << endl;
                cout << "YOU DIED"
            }
            else if(choice_num == 1)
            {
                player -> healing();
                cout << "Holy crap... Some health potions" << endl;
            }
            else
            {
                player -> add_Gold();
                player -> add_Gold();
                cout << "CHA CHING GOLD GOLD GOLD!" << endl;
            }
        x = false
        }
        else if (choice == 'c')
        {
            if (choice_num == 0)
            {
                player -> add_treasure();
                cout << "The goddess of luck smiles upon you as you found the lost treasure that all adventurers seek!" << endl;
            }
            else if(choice_num == 1)
            {
                player -> remove_health();
                cout << "Those arrows from that trap aren't doing you much good... Looking like a porcupine adventurer!" << endl;
            }
            else
            {
                player -> remove_Gold();
                cout << "Hey! You thief! My gold!!!" << endl;
            }
        x = false;
        }
        else
        {
            cout << "Not a path Enter another choice:" << endl;
            cin >> choice;
        }
    }
}
