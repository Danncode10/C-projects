#include <iostream>
using namespace std;

int main() {
    // Display All Elements in the array, instead of
    // manual output like cout << name[0]....

    // Example 1
    string student[] = {"Dann", "Rhen", "Vea"};
    for (int i = 0; i < 3; i++) {  // Fix the loop condition here
    //				nagiging infinite loop pag i <= 3, kase student[i] start sa zero, walang value na student[3] kase 3 lang ang laman ng array
        cout << student[i] << endl;
    }

    // There are flaws here, what if you put another element in the array
    // papalitan mo ung sa part na i < number, gagana siya pero ndi magandang practice

    // Example 2
    cout << "\n\n";

    string student2[] = {"Dann", "Rhen", "Vea", "Lester"};

    for (int i = 0; i < sizeof(student2) / sizeof(string); i++) {
        cout << student2[i] << endl;
    }

    cin.get();
    return 0;
}

