#include <bits/stdc++.h>
using namespace std;

int main(){
    string word;
    cout << "enter word: ";
    cin >> word;
    for(int i = word.length() -1; i >=0; i--){
        cout << word[i] << endl;
    }
    return 0;
}
