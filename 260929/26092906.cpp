#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    int age;
    
    cout << "enter name: ";
    cin >> name ;
    cout << "enter age: ";
    cin >> age ;
    cout << "hello," << name << endl;
    cout << "you are " << age << " years old";
    return 0;
}
