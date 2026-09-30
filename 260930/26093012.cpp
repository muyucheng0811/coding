#include <iostream>
using namespace std;

void addTen(int *ptr){
    *ptr +=10;
}
int main(){
    int number = 5;
    addTen(&number);
    cout << number << endl;
    return 0;
}