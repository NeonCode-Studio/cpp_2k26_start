#include <iostream>
using namespace std;

float poletr(float a ,float h) {
    return  1.0/2.0*a*h;
}

int main(int argc, char** argv) {
    cout<<"podaj podstawę trójkąta: ";
    float podstawa,wysokosc;
    cin>>podstawa;
    cout<<"Podaj wysokosć trójkąta: ";
    cin>>wysokosc;
    cout<<"pole trojkata dla podanych wymiarow to : "<<poletr(podstawa,wysokosc)<<endl;

    return 0;
}