#include <iostream>
using namespace std;

void sort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numbers[] = {10, 7, 1, 3, 2, 6, 4, 5, 9, 8};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    sort(numbers, size);

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }

    cin.get();
    return 0;
}

