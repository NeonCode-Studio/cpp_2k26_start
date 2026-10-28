#include <iostream>
using namespace std;

int main() {
    cout<<"tabliczka mnożenia dla 5"<<endl;

    int x = 5;

    for(int i=10 ; i>=0 ; i = i - 1) {
        cout<<i<<"*"<<x<<"="<<i*x<<endl;

    }
    return 0;
}