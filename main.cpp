#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "mc.h"
#include "enemy.h"
#include "Minotaur.h"
using namespace std;

int main(){
    int loot;
    int choice;
    bool alive = true;
    mc player;
    mc* playpoint = &player;
    cout << "Please choose a mode. Enter 1 for normal and 2 for insanity!";
    cin >> choice; 
    while((choice != 1) || (choice != 2)){
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
        player.showstatus();
        Minotaur foe = Minotaur();
        cout << "Minotaur" << endl;
        foe.showStatus();
        foe.taken(playpoint);
        foe.dealt(playpoint);
        foe.showStatus();
    }
    
}