#include <iostream>
using namespace std;

int main() {
    string a = "Are you sure you want to exist?";
    string i = "[1] -Yes";
    string j = "[2] -No";
    int c;

    cout<<a<<endl;
    cout<<i<<"  "<<j<<endl;
    
    cin>>c;

    if (c == 1) {
        cout<<"oh, in your life is everything right probably."<<endl;
    } else if (c == 2) {
        cout<<"me too twin , me too . please don't do that :("<<endl;
    } else if (c == 67) {
        cout<<"Fuck you little bitch! Go back to yt shorts!"<<endl;
    } else {
        cout<<"that's not right little kid!"<<endl;
    }
    return 0;
}