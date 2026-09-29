#include <iostream>
using namespace std;

int main() {
    int n;
    int result = 1;

    cout << "Enter number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    cout << "Factorial: " << result << endl;

    return 0;
}