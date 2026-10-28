#include <iostream>
using namespace std;

int main() {
    int liczba = 100;
    int* wskaznik;

    wskaznik = &liczba;

    cout<<"wartosc zmiennej liczba:"<<liczba<<endl;
    cout<<"adres zmeinnej liczba w ramie:"<<&liczba<<endl;
    cout<<"co przechowuje wskaznik:"<<wskaznik<<endl;

    cout<<"wartosc wskaznika:"<<*wskaznik<<endl;
    *wskaznik=500;
    cout<<"nowa wartosc zmiennej liczba:"<<liczba<<endl;
    return 0;
}