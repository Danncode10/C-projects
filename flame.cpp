#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

using namespace std;

int main() {
    srand(time(NULL));

    // Define the flame characters
    const char* flameChars = "*#:-. ";

    while (true) {
        // Clear the screen
        system("clear");

        // Generate random flame pattern
        for (int i = 0; i < 20; ++i) {
            for (int j = 0; j < 40; ++j) {
                cout << flameChars[rand() % 5];
            }
            cout << endl;
        }

        // Wait a short duration before redrawing
        usleep(100000);
    }

    return 0;
}
