#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int podstawa = 2048;
    float wykladnik = 1.0/4.0;
    int wynik = pow(podstawa,wykladnik);

    cout<<"wynik: "<<wynik<<endl;
    return 0;
}