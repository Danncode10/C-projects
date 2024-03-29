#include <iostream>
using namespace std;

/*
void showNum(int* x){
    cout << *x << endl;
}
*/

void print(char data_type, void* pointer){
    switch(data_type){
        case 'i': cout << *((int*)pointer) << endl;break;
        case 'c': cout <<*((char*)pointer)<< endl;break;
    }
}


int main(){
    int x = 5;
    char letter = 'a';
    
    //showNum(&x);
    
    print('i',&x);
    print('c', &letter);
    
    cin.get();
    return 0;
}
