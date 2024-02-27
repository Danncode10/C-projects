#include <iostream>
using namespace std;

int main() {
    // && = check if two conditions are true
    // || = checks if at least one of two conditions are true
    // ! = reverses the logical state of its operand

    int temp;

    cout << "Enter Temperature: ";
    cin >> temp;

    /*
    if (temp > 0 && temp < 30) {
        // This means that both statements should be true
        cout << "The temperature is good: ";
    } else {
        cout << "The temperature is bad. ";
    }*/

    // Using the ternary operator
    temp > 0 && temp < 30 ? cout << "The temperature is good: " << endl : cout << "The temperature is bad. " << endl;

    // Example 2
    int temp2;

    cout << "Enter Temperature 2: ";
    cin >> temp2;

    temp2 <= 0 || temp2 >= 30 ? cout << "The temperature is good. " << endl : cout << "The temperature is bad. " << endl;

    // Example 3
    bool sunny = true;

    // sunny == true ? cout << "It is sunny outside!" : cout << "It is cloudy"; // When written like this, the result is "It is sunny outside!" because 'sunny' is true
    !sunny == true ? cout << "It is sunny outside!" : cout << "It is cloudy"; // The result is "It is cloudy" because of the '!' (logical NOT)

    return 0;
}
