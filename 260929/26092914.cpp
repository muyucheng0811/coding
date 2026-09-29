#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    string reversed = "";

    cout << "enter word: ";
    cin >> word;
    for(int i=word.length() -1;i>=0;i--){
        reversed += word[i];
    }
    if(reversed == word){
        cout << "palindrome" << endl;
    }
    else{
        cout << "not palidrome" << endl;
    }
    return 0;
}