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
    int max = numbers[0];
    for(int i=0;i<numbers.size();i++){
        if(max < numbers[i]){
            max = numbers[i];
        }
    }
    cout << "max: " << max << endl;
    return 0;
}