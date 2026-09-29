#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "enter numbers: ";
    cin >> n;
    vector<int>numbers;
    for(int i=0;i<n;i++){
        int number;
        cin >> number;
        numbers.push_back(number);
    }
    int sum = 0;
    for(int i=0;i<numbers.size();i++){
        cout << "numbers: " << numbers[i] << endl;
        sum = numbers[i]+sum;
    }
    cout << "sum: " << sum << endl;
    return 0;

}