#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    cout << "enter word: ";
    cin >> word;
    
    cout << "first: " << word.front() << endl;
    cout << "last: " << word.back() << endl;

    return 0;

}