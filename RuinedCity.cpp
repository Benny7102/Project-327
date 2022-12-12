#include "RuinedCity.h"

using namespace std;

void cityChoice(mc* player)
{   
    char choice;
    cout << "Please choose a path a,b,c, or d:";
    cin >> choice;
    int choice_num = (rand() %3);
    bool x = true;
    while (x)
    {
        if (choice == 'a')
        {
            if (choice_num == 0)
            {
                cout << "Bandits have come for your money but you beat them and stole their money instead.";
                player -> add_gold();
            }
            else if(choice_num == 1)
            {
                cout << "The Lost Soldiers from the ruined city view you as a threat and attacked you. You survived but lost health and strength after fighting them." << endl;
                player -> remove_health(10);
                player -> remove_damage(2);
            }
            else
            {
                cout << "You found a sacred weapon that makes you stronger." << endl;
                player -> add_damage(7);
            }
        x = false;
        }
        else if (choice == 'b')
        {
            if (choice_num == 0)
            {
                cout << "You bask in the abundance of the city's vault of precious metals" << endl;
                player -> add_treasure();
                player -> add_treasure();
                player -> add_gold();
            }
            else if(choice_num == 1)
            {
                cout << "You find a healing herb and use it to patch yourself up." << endl;
                player -> healing(4);
            }
            else
            {
                cout << "You fell into a ditch and broke your ankle. But you see and abandoned gold mine..." << endl;
                player -> remove_health(5);
                player -> remove_damage(5);
                player -> add_gold();
                player -> add_gold();
            }
        x = false;
        }
        else if (choice == 'c')
        {
            if (choice_num == 0)
            {
                cout << "God's wrath descends upon you as you stepped into the cursed temple.\n" << endl;
                player -> remove_health(100000);
            }
            else if(choice_num == 1)
            {
                cout << "You met a group of bandits, you live to tell the tale." << endl;
                player -> add_gold();
                player -> remove_health(5);
            }
            else
            {
                cout << "You saw a injured person. You go over to help." << endl;
                cout << "Turns out he was a god in disguise. He blesses your kind heart." << endl;
                cout << "Before leaving he gives you stuff he collected from a nearby temple" << endl;
                player -> add_damage(10);
                player -> healing(20);
                player -> add_gold();
                player -> add_treasure();
            }
        x = false;
        }
        else if (choice == 'd')
        {
            if (choice_num == 0)
            {
                cout << "The toxic fumes of the moss from this path is starting to affect you." << endl;
                player -> remove_damage(1);
                player -> remove_health(1);
                player -> remove_damage(1);
                player -> remove_health(1);
                player -> remove_damage(1);
                player -> remove_health(1);
            }
            else if(choice_num == 1)
            {
                cout << "You meet a resistance force that is planning to rebuild a settlement. They help you out and give you money for your travels." << endl;
                player -> healing(10);
                player -> add_gold();
            }
            else
            {
                cout << "Now that is bad luck right? You lost your money while traveling and fighting your way through a group of gremlins." << endl;
                player -> remove_gold(8);
                player -> remove_damage(3);
                player -> remove_health(5);
            }
        x = false;
        }
        else
        {
            cout << "Not a valid option!Please enter a valid option a,b,c or d:" << endl;
            cin >> choice;
        }
    }
}