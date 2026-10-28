#include <iostream>
using namespace std;

int main() {
    int liczba = 500;
    int* wskaznik = &liczba;

    cout<<"Wartość zmiennej:"<<liczba<<endl;

    cout<<"adres w ramie:"<<&liczba<<endl;
    cout<<"wartość wskaznika:"<<wskaznik<<endl;

    cout<<"wartosc na ktora pokazuje wskanik:"<<*wskaznik<<endl;

    *wskaznik = 999;
    cout<<"nowa wartosc liczba:"<<liczba<<endl;
    return 0;
}