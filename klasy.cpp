#include <iostream>
#include <string>
using namespace std;

class Postac {
    public:
        string imie;
        int hp;

        void otrzymajObrazenia(int moc_ataku) {
            hp = hp - moc_ataku;
           cout<<imie<< " dostal dmg! aktualne hp: "<<hp<<endl; 
        }
};

int main() {
    Postac mag;
    mag.imie = "Gandlaf";
    mag.hp = 80;

    mag.otrzymajObrazenia(30);
}