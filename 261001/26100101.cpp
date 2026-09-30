#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student{
    string name;
    int age;
};
int main(){
    int count;
    cout << "how many students: ";
    cin >> count;

    vector<Student> students;

    for(int i=0;i<count;i++){
        Student temp;
        cout << "enter name: ";
        cin >> temp.name;
        cout << "enter age: ";
        cin >> temp.age;
        students.push_back(temp);
    }
    for(int i=0;i<students.size();i++){
        cout << "name: " << students[i].name << endl;
        cout << "age: " << students[i].age << endl;
    }
    return 0;
    
}