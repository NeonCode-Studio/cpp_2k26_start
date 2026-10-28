#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int podstawa;
    int wykladnik;
    int wynik;
    cin>>podstawa;
    cin>>wykladnik;
    wynik=pow(podstawa,wykladnik);
    cout<<"wynik: "<<wynik<<endl;
    return 0;
}