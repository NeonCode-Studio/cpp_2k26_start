#include <iostream>
#include <string>
using namespace std;

class neoncode_users{
public:
    string name;
    int lvl;

    neoncode_users(string name, int lvl){
        cout<<"[SYSTEM]stworzono uzytkownika o nazwie "<<name<<endl;
    }

    void witaj() {
        cout<<"Witaj w NeonCode OS !"<<endl;
    } 
};

int main() {
    neoncode_users* dynamic_user = new neoncode_users("Neon", 1);

    dynamic_user->witaj();
    delete dynamic_user;
    return 0;
}