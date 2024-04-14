#include <iostream>
using namespace std;

//void walk(int size){
//    if(size > 0){
//        cout << "You Walk!" << endl;
//        walk(size - 1);
//    }
//}

//int factorial(int size){
//    int num = 1;
//    for(int i = 0; i < size; i++){
//        num = num*(size-i);
//    }
//    return num;
//}

int factorial(int size){
    if(size > 1){
        return size * factorial(size-1);
    }
    else{
        return 1;
    }
}

int main(){
    
//    walk(10);
    
    cout << factorial(5);
    
    cout << endl;
    return 0;
}
