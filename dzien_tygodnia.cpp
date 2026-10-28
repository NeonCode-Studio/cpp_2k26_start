#include <iostream>
using namespace std;

int main() {
    string dzien;
    cout<<"podaj dzień tygodnia:"<<endl;
    cin>>dzien;
    if(dzien == "sobota" || dzien == "niedziela") {
        cout<<"podany dzien pokazuje ze jest weekend"<<endl;
    } else if (dzien == "poniedziałek" || dzien == "wtorek" || dzien == "środa" || dzien == "czwartek" || dzien == "piątek") {
        cout<<"podany dzien pokazuje ze nie ma jeszcze weekendu"<<endl;
    } else {
        cout<<"podane slowo nie wskazuje na dzian tygodnia"<<endl;
    }
    if(dzien != "sobota") {
        cout<<"dziś nie ma soboty!"<<endl;
    }
    return 0;
}