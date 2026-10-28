#include <iostream>
using namespace std;

int main() {
    int stan_bateri = 100;
    cin >>stan_bateri;

    while(stan_bateri >= 0) {
        if (stan_bateri == 20) {
            cout<<"Podłacz ładowarke ponieważ ";
        } else if (stan_bateri == 0){
            cout<<"BATERIA ROZŁADOWANA ";
        }

        cout<<"stan bateri to:"<<stan_bateri<<endl;

        stan_bateri = stan_bateri - 20;
    }
}