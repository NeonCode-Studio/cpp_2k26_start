#include <iostream>
using namespace std;

int main() {
    int wyniki[4];

    wyniki[0] = 10;
    wyniki[3] = 99;

    for(int i = 1; i < 3; i++) {
        cout<<"podaj element nr: "<<i<<":";
        cin>>wyniki[i];
    }

    cout<<"twoje 4 elementy to:"<<endl;
    for (int i = 0; i < 4; i++) {
        cout<<"szuflada nr :"<<i<<" zawiera "<<wyniki[i]<<endl;
    }
    return 0;
}