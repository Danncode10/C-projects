#include <iostream>
using namespace std;

int main() {
    string name, name2;
    
    if (name.empty()) {
        cout << "Enter Name: ";
        getline(cin, name);  // Read the entire line of input again. Dapat ganto gamitin pag name.empty.
    }
    //But if, only works ones but not infinite, thus we use, while
    while(name2.empty()) {
        cout << "Enter Name: ";
        getline(cin, name2);  // While is infinite until you add value. Repeats program infinitely if the statement 
        // is true

    // Try this code. Infinite Loop
    /*
    while(1==1){
        cout <<"Help Im in an Infinite Loop";
    }
    */

    cout << "Name 1: " << name <<endl;
    cout << "Name 2 " << name2 <<endl;

    
    return 0;
}
