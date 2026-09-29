#include <iostream>
using namespace std;

int main(){
    int a;
    int b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    int Sum = a+b;
    int Difference = a-b;
    int Product = a*b;
    double Quotient = (double)a/b;

    cout << "Sum: " << Sum << endl;
    cout << "Difference: " << Difference << endl;
    cout << "Product: " << Product << endl;
    cout << "Quotient: " << Quotient << endl;

    return 0;

}