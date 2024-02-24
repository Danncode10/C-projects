#include <iostream>

using namespace std;

int main() {
    char op; //op for operation
    double num1, num2, result;

    cout << "------------------CALCULATOR--------------------\n";

    cout << "ENTER Either (+, -, *, /): ";
    cin >> op;

    cout << "Enter Num1: ";
    cin >> num1;

    cout << "Enter Num2: ";
    cin >> num2;

    switch (op) { // Removed the semicolon and added curly braces
        case '+':
            result = num1 + num2;
            cout << "result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "result: " << result << endl;
            break; // Added a missing break statement
        case '/':
            result = num1 / num2;
            cout << "result: " << result << endl;
            break;
        default:
            cout << "Only enter (+, -, *, /)";
    }

    cout << "------------------------------------------------";

    return 0;
}
