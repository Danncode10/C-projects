#include <iostream>
using namespace std;

int main(){
    int a[5] = {1,2,3,4,5};
    
    int *p = a, *q = &a[3];
    //this is also possible, *q = a+3
    
    cout << p - q << endl;
    cout << q - p << endl;
    
    
    
    cout << "\n\n\n";
}
