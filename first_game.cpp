#include <iostream>
using namespace std;

int main() {
    int player_hp = 100;
    int player_dmg = 10;
    int player_heal = 4;

    int monster_hp = 150;
    int monster_dmg = 5;
    
    int pick;

    cout<<"-------------Welcome to FIGHT game-------------"<<endl;
    cout<<"|     you might fight with sth unbelivable    |"<<endl;
    cout<<"|       you will fight with The DRAGON        |"<<endl;
    cout<<"-----------------------------------------------"<<endl;

    while (player_hp > 0 && monster_hp > 0) {
        cout<<"-----------------------------------------------"<<endl;
        cout<<"|     Your hp is  :"<<player_hp<<"hp of dragon is: "<<monster_hp<<"     |"<<endl;
        cout<<"|you still have got "<<player_heal<<"potions for heal hourself|"<<endl;
        cout<<"|                what are you doing rn?       |"<<endl;
        cout<<"|1. fight with sword                          |"<<endl;
        cout<<"|2. heal yourself                             |"<<endl;
        cout<<"| Your move:";
        cin>>pick;

        if (pick == 1) {
            monster_hp = monster_hp - player_dmg;
            cout<<"|-> you beat dragon for 10 points!            |"<<endl;
        } else if (pick == 2 ){
            if (player_heal > 0) {
                player_hp = player_hp + 40;
                player_heal = player_heal - 1;
                cout<<"|-> you drunk elixir your heal is going up    |"<<endl;
            } else {
                cout<<"|-> you do not have heals you wasted your tour|"<<endl;
            }
        } else {
            cout<<"|  !you stare at the dragon and do nothing!   |"<<endl;
        }

        if (monster_hp > 0) {
            player_hp = player_hp - monster_dmg;
            cout<<"|   <-smok zieje ogniem i zadaje ci 5 dmg     |"<<endl;
        }
    }


    cout<<"-----------------------------------------------"<<endl;

    if (player_hp > 0 ) {
        cout<<"|CONGRATULATIONS! ------------------- You won!|"<<endl;
    } else {
        cout<<"|            You died in battle... GAME OVER.           |"<<endl;
    }

    cout<<"-----------------------------------------------"<<endl;
}