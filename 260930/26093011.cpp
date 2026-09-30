#include <iostream>
using namespace std;

int main(){
    int number = 10;
    int *ptr = &number;
    *ptr = 50;

    cout << "number: " << number << endl;
    return 0;
}