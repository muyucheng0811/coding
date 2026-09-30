#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    int age;
};
int main(){
    Student student;
    cout << "enter name: ";
    cin >> student.name;
    cout << "enter age: ";
    cin >> student.age;

    cout << "name: " << student.name << endl;
    cout << "age: " << student.age << endl;

    return 0;
    
}