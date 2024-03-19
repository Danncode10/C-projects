#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    // Fill num array with random numbers
    int num[10];
    for (int i = 0; i < 10; i++) {
        num[i] = rand() % 10;
    }

    // Print num array
    cout << "Original array: ";
    for (int i = 0; i < 10; i++) {
        cout << num[i] << " ";
    }

    cout << "\n\nI want the array values not to repeat \n";
    
    // Fill num2 array with non-repeating random numbers
    int num2[10];
    for (int i = 0; i < 10; i++) {
        num2[i] = rand() % 10 + 1; // Generate a random number
        
        // Check if the generated number is already in num2
        for (int j = 0; j < i; j++) {
            while (num2[i] == num2[j]) { // If the number is repeated, generate a new random number
                num2[i] = rand() % 10 + 1;
            }
        }
    }

    // Print num2 array
    for (int i = 0; i < 10; i++) {
        cout << num2[i] << " ";
    }

    cout << endl;

    return 0;
}
