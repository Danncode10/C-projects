#include <iostream>
using namespace std;

int main(){
    //memory address = a location in memory where data is stored
    //memory address can accessed with & (address-of operator)
    
    string name = "Dann";
    int age = 21;
    bool student = true;
    
    cout << &name << endl;
    cout << &age << endl;
    cout << &student << endl;
    
    
    //----------------//
    cout << endl;
    cin.get();
    return 0;
}
