#include <iostream>
using namespace std;

int main(){
    int numbers[] = {1,2,3,4,5};
    
    //we already know that array adress doesnt need '&'
    //cout << numbers << endl;
    //cout << &numbers[0] << endl;
    
    //cout << numbers[2] << endl;
    //cout << *(numbers + 2) << endl;
    
//    Adress of different arrays is not the same
//    cout << numbers << endl;
//    cout << &numbers[0] << endl;
//    cout << &numbers[1] << endl;
//    cout << &numbers[2] << endl;
    
    for(int i = 0; i < 5; i++){
        cout << *(numbers + i) << " ";
    }
    
    cin.get();
    return 0;
}
