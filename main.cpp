#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "mc.h"
#include "enemy.h"
#include "Minotaur.h"
#include "Rogueknight.h"
#include "Skull.h"
#include "Ghost.h"
#include "Bridge.h"
#include "RuinedCity.h"
#include "Cave.h"
#include "options.h"
using namespace std;

int main(){
    int loot;
    int choice;
    bool alive = true;
    mc player;
    mc* playpoint = &player;
    cout << "Please choose a mode. Enter 1 for normal and 2 for insanity!";
    cin >> choice; 
    while((choice != 1) && (choice != 2)){
        cout << "Please enter a valid choice!" << endl;
        cout << "Please choose a mode. Enter 1 for normal and 2 for insanity!";
        cin >> choice;
    }
    if (choice == 1){
        player = mc();
    }
    else{
        player = mc(100, 5);
    }
    cout << "Deity:Welcome to my dungeon!" << endl;
    cout << "Deity:Tell me what are your ambitions...." << endl;
    cout << "Enter your treasure goal: ";
    cin >> loot;
    if (loot < 8){
        cout << "Deity:Your ambitions are weak!!! You don't deserve to enter my halls!!!" << endl;
        cout << "Your character has been smite to death by the deity!" << endl;
        exit(0);
    }
    else if (loot > 40) {
        cout << "Deity:I like your ambitions. For this you shall be rewarded." << endl;
        player.healing(100);
    }
    else{
        cout << "Deity:Enjoy your stay. HAHAHA......" << endl;
    }
    while(alive){
        int random;
        int one, two, three;
        player.showstatus();
        cout << "There are 3 choices ahead of you. Which will you choose?" << endl;
        cout << "Choice 1" << endl;
        random = 1 + (rand() %4);
        if (random == 1){
            cout << "Minotaur" << endl;
        }
        else if (random == 2){
            cout << "RogueKnight" << endl;
        }
        else if (random == 3){
            cout << "Skull" << endl;
        }
        else{
            cout << "Ghost" << endl;
        }
        one = random;


        cout << "Choice 2" << endl;
        random = 1 + (rand() %3);
        if (random == 1){
            cout << "Ruined City" << endl;
        }
        else if(random == 2){
            cout << "Bridge" << endl;
        }
        else {
            cout << "Cave" << endl;
        }
        two = random;


        cout << "Choice 3" << endl;
        random = 1 + (rand() %6);
        if (random == 1){
            cout << "Shrine" << endl;
        }
        else if (random == 2){
            cout << "Fountain" << endl;
        }
        else if (random == 3){
            cout << "Arena" << endl;
        }
        else if (random == 4){
            cout << "Chest" << endl;
        }
        else if (random == 5){
            cout << "Camp" << endl;
        }
        else{
            cout << "Grave" << endl;
        }
        three = random;

        bool cond = true;
        do{
            cout << "Please choose one of the choices provided(1/2/3):";
            cin >> choice;
            if (((choice == 1)||(choice == 2))||(choice == 3)){
                cond = false;
            }
        }while(cond);

        if (choice == 1){
            if (one == 1){
            Minotaur foe = Minotaur();
            char fight = 'y';
            while(fight == 'y'){
                foe.taken(playpoint);
                foe.dealt(playpoint);
                if (player.killed() == true){
                    cout << "You have died during battle!" << endl;
                    cout << "Game Over" << endl;
                    exit(0);
                }
                if (foe.ifDefeated(playpoint) == false){
                    player.showstatus();
                    cout << "Enemy" << endl;
                    foe.showStatus();
                    cout << "Would you like to attack again?(y/n):";
                    cin >> fight;
                    while((fight != 'y') && (fight != 'n')){
                    cout << "Please make a choice:(y/n)";
                    cin >> fight;
                    }
                }
                else{
                    fight = 'n';
                }
            }
            }
            else if (one == 2){
            Rogueknight foe = Rogueknight();
            char fight = 'y';
            while(fight == 'y'){
                foe.taken(playpoint);
                foe.dealt(playpoint);
                if (player.killed() == true){
                    cout << "You have died during battle!" << endl;
                    cout << "Game Over" << endl;
                    exit(0);
                }
                if (foe.ifDefeated(playpoint) == false){
                    player.showstatus();
                    cout << "Enemy" << endl;
                    foe.showStatus();
                    cout << "Would you like to attack again?(y/n):";
                    cin >> fight;
                    while((fight != 'y') && (fight != 'n')){
                    cout << "Please make a choice:(y/n)";
                    cin >> fight;
                    }
                }
                else{
                    cout << "The enemy has been defeated!" << endl;
                    fight = 'n';
                }
            }
            }
            else if (one == 3){
            Skull foe = Skull();
            char fight = 'y';
            while(fight == 'y'){
                foe.taken(playpoint);
                foe.dealt(playpoint);
                if (player.killed() == true){
                    cout << "You have died during battle!" << endl;
                    cout << "Game Over" << endl;
                    exit(0);
                }
                if (foe.ifDefeated(playpoint) == false){
                    player.showstatus();
                    cout << "Enemy" << endl;
                    foe.showStatus();
                    cout << "Would you like to attack again?(y/n):";
                    cin >> fight;
                    while((fight != 'y') && (fight != 'n')){
                    cout << "Please make a choice:(y/n)";
                    cin >> fight;
                    }
                }
                else{
                    fight = 'n';
                }
            }
            }
            else{
            Ghost foe = Ghost();
            char fight = 'y';
            while(fight == 'y'){
                foe.taken(playpoint);
                foe.dealt(playpoint);
                if (player.killed() == true){
                    cout << "You have died during battle!" << endl;
                    cout << "Game Over" << endl;
                    exit(0);
                }
                if (foe.ifDefeated(playpoint) == false){
                    player.showstatus();
                    cout << "Enemy" << endl;
                    foe.showStatus();
                    cout << "Would you like to attack again?(y/n):";
                    cin >> fight;
                    while((fight != 'y') && (fight != 'n')){
                    cout << "Please make a choice:(y/n)";
                    cin >> fight;
                    }
                }
                else{
                    fight = 'n';
                }
            }
            }
        }
        else if(choice == 2){
                if(two == 1){
                    cityChoice(playpoint);
                    player.showstatus();
                }
                else if(two == 2){
                    BridgeCondition(playpoint);
                    player.showstatus();
                }
                else{
                    pathChoice(playpoint);
                    player.showstatus();
                }
        }
        else{
                if(three == 1){
                    shrine(playpoint);
                    player.showstatus();
                }
                else if(three == 2){
                    fountain(playpoint);
                    player.showstatus();
                }
                else if(three == 3){
                    arena(playpoint);
                    player.showstatus();
                }
                else if(three == 4){
                    chest(playpoint);
                    player.showstatus();
                }
                else if(three == 5){
                    camp(playpoint);
                    player.showstatus();
                }
                else{
                    grave(playpoint);
                    player.showstatus();
                }
        }

        if (player.returnwin() >= loot){
            cout << "You have completed your goal of " << loot << " treasures!" << endl;
            cout << "Game beaten!" << endl;
            exit(0);
        }

        srand (time(NULL));
        random = 1 + (rand() %4);
        player.showstatus();
        if (random == 1){
            char answer;
            cout << "I am the demon from hell. You can trade 5 health for a mystery reward." << endl;
            cout << "Trade health?(y/n):";
            cin >> answer;
            if (answer == 'y'){
                player.remove_health(5);
                if(player.killed() == true){
                    cout << "You have traded the demon all your health. You have died." << endl;
                    cout << "Game Over!" << endl;
                    exit(0);
                } 
                random = 1 + (rand() %2);
                if (random == 1){
                    player.add_damage(8);
                }
                else{
                    cout << "You have been tricked. The demon laughs as he disappears." << endl;
                }
            }
        }
        else{
            cout << "Hello, I am the grand wizard Houdini. For 10 gold I give you a item you need on your journey." << endl;
            char ans;
            random = 1 + (rand() %2);
            cout << "Do you accept the offer?(y/n):";
            cin >> ans;
            if ((random == 1) && (ans == 'y')){
                player.remove_gold(10);
                cout << "Here is a weapon for your journey." << endl;
                random = 1 + (rand() %10);
                player.add_damage(random);
            }
            else if (ans == 'n'){
                cout << "That's a shame. I will see you again." << endl;
            }
            else{
                player.remove_gold(10);
                cout << "Here is a magical herb for your health." << endl;
                random = 1 + (rand() %20);
                player.healing(random);
            }
        }
    }
    return 0;
}