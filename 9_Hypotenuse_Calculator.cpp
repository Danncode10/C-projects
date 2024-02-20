#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //values
    double a, b, c;
    
    //Input
    cout << "Side 1: ";
    cin >> a;

    cout << "Side 2: ";
    cin >> b;

    //Formula
    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    //Output
    cout << "Hypotenuse: " << c;
    cin.get();

    return 0;
}