#include <iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}
int subtract(int a,int b){
    return a-b;
}
int multiply(int a,int b){
    return a*b;
}
int main(){
    int a,b;
    cout << "enter a: " ;
    cin >> a;
    cout << "enter b: " ;
    cin >> b;
    cout << "sum: " << add(a,b) << endl;
    cout << "difference: " << subtract(a,b) << endl;
    cout << "product: " << multiply(a,b) << endl;
    return 0;
}