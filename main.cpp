#include <iostream>
using namespace std;

int main(){
    
    //display number from 0 to 5
    for(int i = 0; i <= 5; i++){
        cout << i << endl;
    }
    
    cout << endl;
    
    //display number from 0 to 5 using while loop
    int j = 0;
    while(j <= 5){
        cout << j << endl;
        j++;
    }
    
    cout << endl;
    
    //display number from 0 to 5 using do-while loop
    int k = 0;
    do{
        cout << k << endl;
        k++;
    }while(k <= 5);
    
    return 0;
}
