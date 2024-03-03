#include <iostream>
using namespace std;
int main(){
    // do while loops = do some block of code first
    //                  Then repeat again if condition is true

    // Example: determining if positive or negative numbers. using a while loop is longer
    int number;
    cout << "Enter a positive number:";
    cin >> number;
    while(number < 0){
        cout << "Enter a positive number:";
        cin >> number;
    }
    cout << "The number is " << number <<endl;

    //Example 2: Using do while loops

    int num2;
    do{

        cout << "Enter a positive for number 2:";
        cin >> num2;
    }while(num2 < 0);
    cout << "The number is " << num2 <<endl;
    return 0;
}