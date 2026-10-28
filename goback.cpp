#include <iostream>
using namespace std;

int main() {
    string player;
    int player_hp = 1000;
    int player_dmg = 75;
    int player_heal = 4;

    int boss_hp = 1450;
    int boss_dmg = 60;

    int wybor;

    cout<<"to jest prosta gra"<<endl;
    cout<<"ta gra polega na walce"<<endl;
    cout<<"postaram sie wyjasnic jak wszystko dziala"<<endl;
    cout<<"chociaz chyba tylko Bóg wie jak to do konca działa"<<endl;
    cout<<"Podaj nick gracza:";
    cin>>player;

    while (player_hp > 0 && boss_hp > 0) {
        cout<<"twoje hp to"<<player_hp<<"hp bosa jest rowne"<<boss_hp<<endl;
        cout<<"masz jeszcze"<<player_heal<<"do uleczenia sie"<<endl;
        cout<<"co robimy?"<<endl;
        cout<<"1. walka mieczem "<<endl;
        cout<<"2. leczenie sie"<<endl;

        cin>>wybor;

        if (wybor == 1) ;
    }
}