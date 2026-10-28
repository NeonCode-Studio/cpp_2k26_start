#include <iostream>
using namespace std;

int main() {
    string bronie[3];

    for(int i = 0; i < 3; i++){
        cout<<"wpisz nazwe broni nr:"<<i<<":"<<endl;
        cin>>bronie[i];
    }

    cout<<"YOUR eq is:"<<endl;
    for (int i = 0; i < 3; i++) {
        cout<<"szuflada nr "<<i<<" zawiera "<<bronie[i]<<endl;
    }
    return 0;
}