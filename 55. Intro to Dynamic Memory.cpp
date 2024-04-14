#include <iostream>
using namespace std;

int main(){
    
    int *pNum = NULL;
    pNum = new int;
    *pNum = 10;
    
    cout << "Address: " << pNum << endl;
    cout << "Value: " << *pNum << endl;
    
    delete pNum; //This deletes pNum variable
    
    //How about heap memory of arrays
    
    char *pGrades = NULL; //dont use pGrades[]
    int size;
    cout << "Enter size of Array: ";
    cin >> size;
    
    pGrades = new char[size];
    
    //enter grade
    for(int i = 0; i < size; i++){
        cout << "grades " << i+1 << ": ";
        cin >> pGrades[i]; //You can also use pGrades + 1;
        //Take note no need na ang pointer (*) sa array kase
        //ang array works as address (&)
    }
    cout << endl;
    
    
    //output array
    for(int i = 0; i < size; i++){
        cout << pGrades[i] << " ";
    }
    delete[] pGrades; //when deleting arrays
        
    
    
    cout << endl;
    return 0;
}
