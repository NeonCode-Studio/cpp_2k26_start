#include <iostream>
using namespace std;

int pomnoz(){
    int liczba;
    int liczba1;
    cout<<"podaj pierwsza liczbe do pomnożenia:";
    cin>>liczba;
    cout<<"podaj druga liczbe do pomnozenia:";
    cin>>liczba1;
    return liczba * liczba1;
}

int main(){
    int liczba3 = pomnoz();
    cout<<liczba3<<endl;
}