#include <iostream>
#include <string>
using namespace std;

class neoncode_users{
public:
    string name;
    int lvl;

    neoncode_users(string name, int lvl){
        cout<<"[SYSTEM]stworzono uzytkownika o nazwie "<<name<<" oraz poziomie uprawnien "<<lvl<<endl;
    }

    void witaj() {
        cout<<"Witaj w NeonCodeOS"<<name<<endl;
    } 
};

int main() {
    neoncode_users user1("root",1);
    neoncode_users user2("Neon",2);

    user1.witaj();

    return 0;
}