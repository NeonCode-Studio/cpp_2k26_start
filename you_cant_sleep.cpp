#include <iostream>
using namespace std;

int main() {
    int i;
    cin >> i;

    while(i>0){
        cout<<"You may not rest now,there are monsters nearby"<<endl;
        i = i-1;
    }

    cout<<"1/1 players are sleeping rn"<<endl;
    return 0;
}