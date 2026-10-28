#include <iostream>
#include <string>
using namespace std;

class Hi{
public:
    string witaj;
    string jd;
    int hitler;

    void witoj(string jebac) {
        if (hitler == 1 ) {
            cout<<"jdjdjdjdjdj"<<witaj<<"co ja robie xd"<<jd<<endl;
        } else if ( hitler == 67) {
            cout<<"spierdlalaj na smietnik kurwo jebana"<<endl;
        } else {
            cout<<"dupa"<<endl<<"cycki"<<endl<<"StYL GoTYcki"<<endl;
        }
    }
};

int main() {
    Hi bazylek;
    bazylek.witaj="ok";
    bazylek.jd="ej to jest nieuzyte nigdy :d";
    bazylek.hitler=1;

    bazylek.witoj("67 i do pieca");

    Hi noga;
    noga.witaj="ok";
    noga.jd="dupa";
    noga.hitler=67;

    noga.witoj("obdyp");

    Hi tajne;
    tajne.witaj="2";
    tajne.jd="3";
    tajne.hitler=9;

    tajne.witoj("ok");
    return 0;
}