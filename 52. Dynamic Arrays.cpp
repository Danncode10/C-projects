#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter Size of the ARRAY: ";
    cin >> size;
    
//    int myArray[size];
    int* myArray = new int(size);
    
    for(int i = 0; i < size; i++){
        cout << "Enter Array[" << i << "] : ";
        cin >> myArray[i];
    }
    
    for(int i = 0; i < size; i++){
//        cout << myArray[i] << " ";
        cout << *(myArray + i) << " ";
        
    }
    
    cout << endl;
    cin.get();
    return 0;
}
