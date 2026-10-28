#include <iostream>
#include <string>
using namespace std;

class Przycisk {
public:
    string napis;
    int szerokosc;

    void kliknij() {
        cout<<"kliknieto przycisk o napisie: "<<napis<<endl;

    }
};

int main() {
    Przycisk* moj_przycisk = new Przycisk;

    moj_przycisk->napis = "Zatwierdz";
    moj_przycisk->szerokosc = 120;

    moj_przycisk->kliknij();

    delete moj_przycisk;
    moj_przycisk = nullptr;

    return 0;
}