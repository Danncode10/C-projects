#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int n = 10;
    char b = ' ';
    int sym;

    
    srand(time(0));
int loop;
do{
    // Upper part of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << b;
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
        	sym = rand() & 1;
            cout << sym;
        }
        for (int j = 1; j <= n - i; j++) {
            cout << b;
        }
        cout << endl;
    }

    // Lower part of the diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << b;
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
        	sym = rand() & 1;
            cout << sym;
        }
        for (int j = 1; j <= n - i; j++) {
            cout << b;
        }
        cout << endl;
    }
}while(loop <= 69);

    cin.get();
    return 0;
}


