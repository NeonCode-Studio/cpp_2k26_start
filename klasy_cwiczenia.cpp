#include <iostream>
#include <string>
using namespace std;

class Kalkulator {
public:
    double liczba1;
    double liczba2;

    void dodaj(){
        cout<<"suma liczby 1 i liczby 2 jest rowna "<<liczba1+liczba2<<endl;
    }
};

int main() {
    Kalkulator* moj_kalkulator = new Kalkulator;
    moj_kalkulator->liczba1 = 10.5;
    moj_kalkulator->liczba2 = 20.5;
    
    moj_kalkulator->dodaj();

    delete moj_kalkulator;
    moj_kalkulator = nullptr;

    return 0;


}