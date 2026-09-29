#include <iostream>
using namespace std;

int main() {
    int numbers[5];

    cout << "Enter number: ";
    cin >> numbers[0];

    int max = numbers[0];

    for (int i = 1; i < 5; i++) {
        cout << "Enter number: ";
        cin >> numbers[i];

        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    cout << "Max: " << max << endl;

    return 0;
}