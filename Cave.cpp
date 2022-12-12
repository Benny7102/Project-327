#include "Cave.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "mc.h"

using namespace std;


void pathChoice(mc* player)
{   
    char choice;
    cout << "Please choose a path a,b, or c:";
    cin >> choice;
    int choice_num = (rand() %3);
    bool x = true;
    while (x)
    {
        if (choice == 'a')
        {
            if (choice_num == 0)
            {
                cout << "'COUGH COUGH' Poison... My strength is leaving me...";
                player -> remove_health(1);
                player -> remove_health(1);
                player -> remove_health(1);
                player -> remove_health(1);
                player -> remove_health(1);
                player -> remove_damage(2);
            }
            else if(choice_num == 1)
            {
                cout << "Passing through a sacred room, gives you a boost in strength! Choosing this path was a great idea!" << endl;
                player -> add_damage(3);
            }
            else
            {
                cout << "I feel so tired. That path took too long to get through. However it was worth it." << endl;
                player -> remove_damage(2);
                player -> add_treasure();
            }
        x = false;
        }
        else if (choice == 'b')
        {
            if (choice_num == 0)
            {
                cout << "A mysterious presence hates you...\n" << endl;
                player -> remove_health(100000);
            }
            else if(choice_num == 1)
            {
                cout << "This is a sacred pool" << endl;
                player -> healing(20);
            }
            else
            {
                cout << "A pirates hideout! Your gonna be rich." << endl;
                player -> add_gold();
                player -> add_gold();
                int num = 1 + (rand() %4);
                if(num == 1){
                    cout << "What is this box?" << endl;
                    player ->add_treasure();
                }
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
            cout << "Not a valid option!Please enter a valid option a,b or c:" << endl;
            cin >> choice;
        }
    }
}
