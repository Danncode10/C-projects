#include <iostream>
using namespace std;

int searchPosition(string array[], int size, string element) {
    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    string foods[] = {"PIZZA", "HAMBURGER", "HOTDOG"};
    string choice;
    int index;
    int size = sizeof(foods) / sizeof(foods[0]);

    cout << "Enter Food: ";
    getline(cin, choice);
    
    index = searchPosition(foods, size, choice);

    if (index == -1) {
        cout << choice << " is not in the array. ";
    } else {
        cout << choice << " is at index " << index;
    }

    return 0;
}

