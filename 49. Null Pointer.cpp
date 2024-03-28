#include <iostream>
using namespace std;

int main(){
    
    //TAKE NOTE: when assigning a pointer without value yet,
    //           asign it to = nullptr
    
    //Example 1:
    
    int *pointer = nullptr;
    int x = 123;
    
    pointer = &x;
    
    //Lets Test If Pointer is assigned to adress
    if(pointer == nullptr){
        cout << "Address was not assigned" << endl;
    }
    else{
        cout << "Address was assigned" << endl;
        cout << "Value: " << *pointer << endl;
    }
    
    
    return 0;
}
