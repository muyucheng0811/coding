#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    cout << "enter word: " ;
    cin >> word;
    int count = 0;
    for(int i=0;i<word.length();i++){
        if(word[i] == 'a'){
            count++;
        }
    }
    cout << "number of a: " << count << endl;
    return 0;
}