#include "Cave.h"

using namespace std;


int randnum()
{
    int choice_num = rand() % 3;
}

void Cave::pathChoice(mc* player, char choice)
{
    cin >> choice;
    bool x = true;
    while (x)
    {
        if (choice == 'a')
        {
            if (choice_num == 0)
            {
                cout << "'COUGH COUGH' Poison... My strength is leaving me...";
                player -> remove_health(5);
                player -> remove_damage(4);
            }
            else if(choice_num == 1)
            {
                cout << "Praying at the altar gives you a boost in strength! Choosing this path was a great idea!" << endl;
                player -> add_damage(3);
            }
            else
            {
                cout << "I feel so tired. That path took too long to get through." << endl;
                player -> remove_damage(1);
            }
        x = false;
        }
        else if (choice == 'b')
        {
            if (choice_num == 0)
            {
                cout << "A mysterious presence hates you...\n" << endl;
                cout << "YOU DIED";
                player -> killed();
            }
            else if(choice_num == 1)
            {
                cout << "Holy crap... Some health potions" << endl;
                player -> healing(10);
            }
            else
            {
                cout << "CHA CHING GOLD GOLD GOLD!" << endl;
                player -> add_gold();
                player -> add_gold();
            }
        x = false;
        }
        else if (choice == 'c')
        {
            if (choice_num == 0)
            {
                cout << "The goddess of luck smiles upon you as you found the lost treasure that all adventurers seek!" << endl;
                player -> add_treasure();
            }
            else if(choice_num == 1)
            {
                cout << "Those arrows from that trap aren't doing you much good... Looking like a porcupine adventurer!" << endl;
                player -> remove_health(5);
            }
            else
            {
                cout << "Hey! You thief! My gold!!!" << endl;
                player -> remove_gold(10);
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
