#include <iostream>
#include <string>
using namespace std;

class monster {
public:
    string nazwa;
    int hp;

    void ryk() {
        cout<<nazwa<<" wydaje przerazajacy ryk! oraz ma "<<hp<<"hp"<<endl;
    }
};

int  main() {
    monster firstmonster;
    firstmonster.nazwa = "smok";
    firstmonster.hp = 150;

    firstmonster.ryk();

    monster secondmonster;
    secondmonster.nazwa = "mama z laczkiem";
    secondmonster.hp = 10000;

    secondmonster.ryk();

    return 0;
}