#include <iostream>
using namespace std;

int main(){
    //Multiplication table
    
    for(int i = 1; i <= 10; i++){//kaya i = 1 kase starts sa 1
        for(int j = 1; j <= 10; j++){
            cout << i*j << "\t";
        }
        cout << endl;
    }
    
    
    return 0;
}
