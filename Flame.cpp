#include <iostream>
using namespace std;

int main(){
    int n = 10;
    string sp = " ";
    string sym = "*";
    
        for(int i = 0; i <= n; i++){
            for(int j = i; j <= n; j++){
                cout << sp;
            }
            for(int j = 0; j <= i; j++){
                cout << sym;
            }
            for(int j = 0; j <= i-1; j++){
                cout << sym;
            }
            
            cout << endl;
        }
        
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= i; j++){
                cout << sp;
            }
            for(int j = i; j <= n; j++){
                cout << sym;
            }
            for(int j = i; j <= n-1; j++){
                cout << sym;
            }
            
            cout << endl;
        }
    
    
    return 0;
}
