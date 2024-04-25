//#include <iostream>
//using namespace std;
//
//int main(){
//    
//    int num[10] = {1,2,3,4,5,6,7,8,9,10};
//    
//    cout << "Num[0]: " <<  &num[0] << endl;
//    cout << "Num[1]: " <<  &num[1] << endl;
//    cout << "Num[1] subtract 1: " <<  &num[1] - 1 << endl;
//    cout << "Num[2]: " <<  &num[2]-2<< endl;
//    
//    //To get the address of array[0] = &array[i] - i
//    
//    cout << endl;
//    return 0;
//}

#include <iostream>
using namespace std;

void addNumbers(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}

int main(){
    int num1 = 5, num2 = 10;
    addNumbers(num1, num2);
    cout << num1 << " " << num2;
}

