#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Upper part of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "-";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        for (int j = 1; j <= n - i; j++) {
            cout << "-";
        }
        cout << endl;
    }

    // Lower part of the diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "-";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        for (int j = 1; j <= n - i; j++) {
            cout << "-";
        }
        cout << endl;
    }

    cin.get();
    return 0;
}

