#include <iostream>
using namespace std;

int main(){
    //Pointers - variable that stores a memory address of another variable
    //           sometimes it is easier to use pointers
    // & address of operator
    // * dereference operator
    
    string name = "Dann";
    string *pName = &name;
    
    cout << "This is the Value: " << *pName << endl;
    cout << "This is the Address: " << pName << endl;
    
    cout << "\nPointers is commonly used in arrays \n" << endl;
    string tao[5] = {"Dan", "Vea", "Rhen", "Victor", "Helen"};
    string *pTao = tao;
    
     //Take note pag array no need na ang & address of operator. Why?
    cout << "Display Address ng Array: " << tao << endl;
    cout << "Display Address ng Array: " << pTao << endl;
    cout << "Value of Array: " << *pTao << endl; // Displays the first value
    
    
    
    return 0;
}
