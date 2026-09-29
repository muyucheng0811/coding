#include <iostream>
using namespace std;

int main(){
    int numbers[5];
    cout << "enter numbers: ";
    cin >> numbers[0]; 
    int min = numbers[0];
    for(int i=1;i<5;i++){
        cout << "enter numbers: ";
        cin >> numbers[i];
        if(min>numbers[i]){
            min = numbers[i];
        }
    }
    cout << "min: " << min << endl;
    return 0;
}