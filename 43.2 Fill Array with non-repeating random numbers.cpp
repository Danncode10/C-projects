#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(static_cast <unsigned int>(time(0)));
    
    // Empty arrays
    int num[10];
    int notRepeat[10];
    
    for(int i = 0; i < 10; i++) { // Iterate over each element of the num array
        num[i] = rand() % 10 + 1; // Generate a random number between 1 and 10
        
        for(int j = 0; j < i; j++) { // Check for repetition among previously generated numbers
            while(num[i] == notRepeat[j]) { // If the current number is repeated
                num[i] = rand() % 10 + 1; // Generate a new random number until it's unique
            }
            
            notRepeat[i] = num[i]; // Store the unique number in the notRepeat array
        }
    }
    
    for (int i = 0; i < 10; i++) {
        cout << num[i] << " "; // Output the generated numbers
    }
    
    cin.get();
    return 0;
}
