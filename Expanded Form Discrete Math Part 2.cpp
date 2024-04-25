#include <iostream>
using namespace std;

double fact(int size){
    int num = 1;
    for(int i = 0; i < size; i++){
        num = num * (size - i);
    }
    return num;
}

double perm(int n, int k){
    double num;
    num = fact(n)/(fact(k)*fact(n - k));
    return num;
}

int main(){
    
    string var1, var2;
    int n; // n is the exponent
    
    cout << "Enter Variable 1: ";
    cin >> var1;
    
    cout << "Enter Variable 2: ";
    cin >> var2;
    
    cout << "Enter Exponent: ";
    cin >> n;
    
    int size = n + 1;
    double coi[size];
    int x[size];
    
    for(int i = 0; i < size; i++){
        coi[i] = perm(n, i);
        x[i] = n - i;
    }
    for(int i = 0; i < size; i++){
//        if(i == 0){
//            cout << coi[i] << var1 << x[i] << " + ";
//        }
//        if(coi[i] == 1){
//            cout << var1 << x[i] << var2 << i << " + ";
//        }
        
        
        cout << coi[i] << var1 << x[i] << var2 << i << " + ";
    }
    
    
    cout << endl;
}
