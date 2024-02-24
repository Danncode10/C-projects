#include <iostream>
#include <bitset>

using namespace std;

int main() {
    string input_text;
    cout << "Enter text to convert to binary: ";
    getline(cin, input_text);

    cout << "Binary representation: " << endl;
    for (char c : input_text) {
        bitset<8> binary_char(c);
        cout << binary_char;
    }
    cout << endl;

    return 0;
}
