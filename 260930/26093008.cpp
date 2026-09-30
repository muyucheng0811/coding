#include <iostream>
using namespace std;

void addTen(int &number){
    number += 10;
}
int main(){
    int x=5;
    addTen(x);
    cout << x << endl;
    return 0;
}