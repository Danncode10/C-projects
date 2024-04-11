#include <iostream>
using namespace std;
int main(){
    int matrix[3][3];
    
    cout << "MATRIX 1\n\n";
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Enter integer for [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    
    cout << "\nMATRIX 2\n\n";
    int matrix2[3][3];
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Enter integer for [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }
    
    cout << "\nMATRIX OF SUM ELEMENTS\n\n";
    
    //blank
    int sum[3][3];
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matrix[i][j] << " ";
            sum[i][j] = matrix[i][j] + matrix2[i][j];
        }
        cout << " + ";
        for(int j = 0; j < 3; j++){
            cout << matrix2[i][j] << " ";
        }
        cout << " = ";
        
        for(int j = 0; j < 3; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
        
        
        
    }
    
    cout << endl;
}
