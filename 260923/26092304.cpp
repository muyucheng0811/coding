#include <iostream>
using namespace std;

int main(){
    int n;
    int i =1;
    int sum = 0;
    cout << "enter number: ";
    cin >> n;
    while(i<=n){
        sum += i;
        i++;
    }
    cout << "sum: " << sum << endl;
    return 0;
}