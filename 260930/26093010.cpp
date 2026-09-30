#include <iostream>
using namespace std;

int main(){
    int number = 20;
    int *ptr = &number;

    cout << "number: " << number << endl;
    cout << "ptr value: " << *ptr << endl;
    return 0;
}