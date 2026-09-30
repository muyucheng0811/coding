#include <iostream>
using namespace std;

void swapValues(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
}
int main(){
    int a = 5;
    int b = 10;
    swapValues(a,b);
cout << "a: " << a << endl;
cout << "b: " << b << endl;
return 0;
}