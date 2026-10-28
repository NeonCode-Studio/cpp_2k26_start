#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int rodzaj;
    cout<<"podaj co chcesz obliczyć:"<<endl;
    cout<<"wpisz 1 dla obwodu koła"<<endl;
    cout<<"wpisz 2 dla obwodu trójkata"<<endl;
    cout<<"wpisz 3 dla obwodu czworokata"<<endl;
    cin>>rodzaj;
    if (rodzaj == 1) {
        float r;
        cout<<"liczysz obwód koła!Podaj długość promienia";
        cin>>r;
        cout<<"Obwód koła to: "<<2*M_PI*r<<endl;
    } else if (rodzaj == 2) {
        float a,b,c;
        cout<<"liczysz obwód trójkata! podaj pierwszy bok:"<<endl;
        cin>>a;
        cout<<"podaj drugi bok:";
        cin>>b;
        cout<<"podaj trzeci bok:";
        cin>>c;
        // cout<<"obwód trójkata to: "<<a+b+c<<endl;
        if (a<b+c && b<a+c && c<b+a) {
            cout<<"obwód trójkata to:"<<a+b+c<<endl;
        } else {
            cout<<"podane odcinki nie spełniaja warunku trójkąta"<<endl;
        }
    } else if (rodzaj == 3) {
        float a,b,c,d;
        cout<<"liczysz obwod czworokata!podaj pierwszy bok:"<<endl;
        cin>>a;
        cout<<"podaj drugi bok:";
        cin>>b;
        cout<<"podaj trzeci bok:";
        cin>>c;
        cout<<"ppodaj czwarty bok:";
        cin>>d;
        cout<<"obwód czworkoąta to: "<<a+b+c+d<<endl;
    } else {
        cout<<"Podana wartość nie odpowiada figurom przewidzianym w programie !";
    }
    return 0;
}