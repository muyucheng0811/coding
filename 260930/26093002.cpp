#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "how many numbers: ";
    cin >> n;
    vector<int>numbers;
    for(int i=0;i<n;i++){
        int number;
        cin >> number;
        numbers.push_back(number);
    }
    for(int i=0;i<numbers.size();i++){
        cout << "numbers: " << numbers[i] << endl;
    }
    return 0;
}