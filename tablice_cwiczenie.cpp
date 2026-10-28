#include <iostream>
using namespace std;

int main() {
    double liczba = 3.14;
    double* wskaznik = &liczba;

    cout<<"Wartość zmiennej:"<<liczba<<endl;

    cout<<"adres w ramie:"<<&liczba<<endl;
    cout<<"wartość wskaznika:"<<wskaznik<<endl;

    cout<<"wartosc na ktora pokazuje wskanik:"<<*wskaznik<<endl;

    *wskaznik = 5.5;
    cout<<"nowa wartosc liczba:"<<liczba<<endl;

    return 0;
}