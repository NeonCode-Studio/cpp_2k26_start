#include <iostream>
using namespace std;

int main() {
    int c = 10;
    if (c++>10) cout<<"Tak c:"<<c<<endl;
    else cout<<"nie c:"<<c<<endl;
    c = 10;
    if (++c>10) cout<<"Tak c:"<<c<<endl;
    else cout<<"nie c:"<<c<<endl;
    return 0;
}