#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    int age;
};
void birthday(Student &student);
int main(){
    Student s;
    cout << "enter name: "; cin >> s.name;
    cout << "enter age: "; cin >> s.age;
    
    birthday(s);
    return 0;
}
void birthday(Student &student){
    student.age++;
    cout << "name: " << student.name << endl;
    cout << "age: " << student.age << endl;
}
