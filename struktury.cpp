#include <iostream>
#include <string>
using namespace std;

struct Gracz {
    string imie;
    int hp;
    int obrona;
};

int main() {
    Gracz wojownik;

    wojownik.imie = "Neon";
    wojownik.hp = 100;
    wojownik.obrona = 45;

    cout<<"Stworzono gracza " <<wojownik.imie<<" z "<<wojownik.hp<<" hp "<<endl;

    return 0;
}