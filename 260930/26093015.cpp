#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    int age;
};
int main(){
    Student s1;
    cout << "enter student s1 name: ";
    cin >> s1.name;
    cout << "enter student s1 age: ";
    cin >> s1.age;
    Student s2;
    cout << "enter student s2 name: ";
    cin >> s2.name;
    cout << "enter student s2 age: ";
    cin >> s2.age;
    
    cout << "student s1 name: " << s1.name << endl;
    cout << "student s1 age: " << s1.age << endl;
    cout << "student s2 name: " << s2.name << endl;
    cout << "student s2 age: " << s2.age << endl;

    return 0;

}