#include <iostream>
using namespace std;

int main(){
    int number = 5;
    int &ref = number;

    ref = 10;

    cout << "number: " << number << endl;
    cout << "ref: " << ref << endl;

    return 0;
}