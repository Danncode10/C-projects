#include <iostream>
using namespace std;

double factorial(int size){
    int num = 1;
    for(int i = 0; i < size; i++){
        num = num*(size-i);
    }
    return num;
}

double permutation(int n, int k){
    int j = n-k;
    double ans;
    double factn = factorial(n);
    double factk = factorial(k);
    double factnk = factorial(j);
    ans = factn/(factk * factnk);
    return ans;
}



int main(){
    string var1, var2;
    int exp;
    while(true){
            cout << "Variable 1: ";
            cin >> var1;
            cout << "Variable 2: ";
            cin >> var2;
        
        cout << "Exponent: ";
        cin >> exp;
        
        //what is the size of the array is a given exponent, example. exp = 3 has 4 numerical coefficiet, x3 + 3x2y + 3xy2 + y2. array size is 4
        
        int size = exp + 1;
        int coefficient[size];
        int x[size];
//        int y[size]; remove this since, y[i] = i
        
        for(int i = 0; i < size; i++){
            coefficient[i] = permutation(exp, i);
            x[i] = exp - i;
//            y[i] = i; we can remove this
        }
        
        for(int i = 0; i < size; i++){
            cout << coefficient[i];
            if(i == 0){
                cout << var1 << x[i];
            }
            else if(x[i] == 0){
                cout << var2 << i;
            }
            else if(i == 1){
                cout << var1 << x[i] << var2;
            }
            else if(x[i] == 1){
                cout << var1 << var2 << i;
            }
            else{
                cout << var1 << x[i] << var2 << i;
            }
            
            if(i != size-1){
                cout << " + ";
            }
        }
        cout << endl;
    }
    
}
