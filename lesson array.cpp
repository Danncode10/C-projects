#include <iostream>
using namespace std;

int main(){
    
    int num[3][2] = {
        {1,2},
        {4,5},
        {7,8}
    };
    
    int size = sizeof(num)/sizeof(num[0][0]);
    cout << size;
    
    //take note
    
    int num2[3][5] = {2}; // this means num2[0][0] = 2........ not the same sa num2[3][5] = 2, magkaiba ung may {}
    
    cout << endl;
    return 0;
}
