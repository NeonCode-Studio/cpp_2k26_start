#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int a,b;
    string dziala = "tak";
    while (dziala == "tak") {
        cout<<"Podaj pierwsza liczbe do zsumowania:"<<endl;
        cin>>a;
        cout<<"Podaj drugą liczbe do zsumowania:"<<endl;
        cin>>b;
        cout<<"suma podanych liczb to:"<<a+b<<endl;
        cout<<"jeżeli chcesz kontynuować wpisz tak jeżeli nie, wpisz cokoliwek innego :";
        cin>>dziala;
    }
    return 0;
}