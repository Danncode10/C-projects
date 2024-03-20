#include <iostream>
using namespace std;

void swap(string &x, string &y){
    string temp;
    temp = x;
    x = y;
    y = temp;
    
}

int main(){
    string x = "Hello";
    string y = "World";
 
    swap(x,y);
    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;

    //---------------//
    cout << endl;
    cin.get();
    return 0;
}
