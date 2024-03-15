#include <iostream>
using namespace std;

int main() {
    
    double sales[4] = {0.0, 0.0, 0.0, 0.0};

    for (int sub = 0; sub < 4; sub++) {
        cout << "Enter the sales for Region " << sub + 1 << ": ";
        cin >> sales[sub];
    }

  
    for (int i = 0; i < 4; i++) {
        cout << "Sales for Region " << i + 1 << ": $" << sales[i] << endl;
    }

    return 0;
}
