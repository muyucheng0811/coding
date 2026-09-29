#include <iostream>
using namespace std;

int main(){
    int numbers[5];
    for(int i=0;i<5;i++){
        cout << "enter numbers: ";
        cin >> numbers[i];
    }
    int sum = 0;
    cout << "numbers: " << endl;
    for(int i=0;i<5;i++){
        cout << numbers[i] << endl;
        sum += numbers[i];
    }
    cout << "sum: " << sum << endl;
    return 0;

}