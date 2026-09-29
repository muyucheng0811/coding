#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;

    cout << "enter full name: " ;
    getline(cin,name);

    cout << "welcome, " << name << endl;
    return 0;
}