#include <iostream>
using namespace std;

int main(){
    int numbers[5];
    for(int i=0;i<5;i++){
        cout << "enter numbers: ";
        cin >> numbers[i];
    }
    int sum = 0;
    for(int i=0;i<5;i++){
        sum += numbers[i];
    }
    double average =(double)sum/5;
    cout << "avg: " << average << endl;
    return 0;
}