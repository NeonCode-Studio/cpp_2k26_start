#include <iostream>
#include <string>
using namespace std;

class Car{
public:
    string marka;
    int predkosc;

    void stan() {
        cout<<"Car brand: "<<marka<<" driving with speed: "<<predkosc<<"km/h"<<endl;
    }
};

int main() {
    Car neoncode_car;
    neoncode_car.marka = "volksvagen";
    neoncode_car.predkosc = 220;

    neoncode_car.stan();

    Car bro_car;
    bro_car.marka = "BMW";
    bro_car.predkosc = 200;

    bro_car.stan();

    return 0;
}