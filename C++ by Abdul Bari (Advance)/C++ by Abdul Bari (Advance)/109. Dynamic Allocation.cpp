//#include <iostream>
//using namespace std;
//
//int main(){
//    int size;
//    
//    cout << "Enter size of Array: ";
//    cin >> size;
//    
//    int *p;
//    p = new int[size];
//    
//    delete []p;
//    p = nullptr; //This part is optional kase i dedeclare
//                //din naman mamaya, pero good practice
//    
//    //Paano kung gusto ko ulit ibahin ung size ng array?
//    
//    cout << "Enter Size of array again: ";
//    cin >> size;
//    
//    p = new int[size];
//
//}

#include <iostream>
using namespace std;

void enter_display(int p[], int size){
    for(int i = 0; i < size; i++){
        p[i] = i;
    }
    
    for(int i = 0; i < size; i++){
        cout << p[i] << " ";
    }
    cout << endl << endl;
}

int main(){
    int size;
    
    cout << "Enter size of Array: ";
    cin >> size;
    
    int *p;
    p = new int[size];
    
    enter_display(p, size);
    
    delete []p;
    p = nullptr; //This part is optional kase i dedeclare
                //din naman mamaya, pero good practice
    
    //Paano kung gusto ko ulit ibahin ung size ng array?
    
    cout << "Enter Size of array again: ";
    cin >> size;
    
    p = new int[size];
    
    enter_display(p, size);
    
    
    
}
