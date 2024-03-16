#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void randomSeed() {
    srand(time(0));
}

int main() {
    int num;
    int sym;

  	num = 25;
    randomSeed();

    int loop = 0;

    do {
        for (int i = 1; i <= num; i++) {
            int spacesBefore = (num - i) / 2; // Calculate the number of spaces before each line
            for (int k = 0; k < spacesBefore; k++) {
                cout << " ";
            }

            for (int j = 1; j <= i; j++) {
                sym = rand() % 2;
                cout << sym;
            }
            cout << endl;
        }

        for (int i = num - 1; i >= 1; i--) {
            int spacesBefore = (num - i) / 2; // Calculate the number of spaces before each line
            for (int k = 0; k < spacesBefore; k++) {
                cout << " ";
            }

            for (int j = i; j >= 1; j--) {
                sym = rand() % 2;
                cout << sym;
            }
            cout << endl;
        }

        loop++;
    } while (loop <= 1000);

    cin.get();
    return 0;
}

