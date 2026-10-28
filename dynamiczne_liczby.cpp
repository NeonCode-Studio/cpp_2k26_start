#include <iostream>
using namespace std;

int main() {
    int* dynamiczna_liczba = new int;

    *dynamiczna_liczba = 2048;
    cout<<"Moja dynamiczna wartosc :"<<*dynamiczna_liczba<<endl;

    delete dynamiczna_liczba;
    dynamiczna_liczba = nullptr;

    return 0;
}