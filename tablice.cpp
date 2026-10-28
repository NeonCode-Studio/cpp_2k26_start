#include <iostream>
using namespace std;

int main() {
    int ile_liczb;
    cout<<"Ile chcesz liczb w tablicy?: ";
    cin>>ile_liczb;
    int* tablica = new int[ile_liczb];

    for (int i=0; i<ile_liczb; i++){
        tablica[i] = (i+1) * 10;
    }

    cout <<"zawartosc tablcy w ramie:"<<endl;
    for (int i = 0; i < ile_liczb; i++) {
        cout <<"Element [" << i << "] = "<<tablica[i]<<endl;
    }

    delete[] tablica;
    tablica = nullptr;

    return 0;
}