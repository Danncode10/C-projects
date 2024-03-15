#include <iostream>
using namespace std;

int main(){
    
    double num[] = {1,2,3,4,5};
    string town[5];
    double sales[5];
    
    for(int i = 0; i < 5; i++){
        cout << "Enter name for town " << num[i] << ": ";
        cin >> town[i];
    }
    
    cout << endl;
    
    for(int i = 0; i < 5; i++){
        cout << "Enter name for town " << town[i] << ": ";
        cin >> sales[i];
    }
    
    cout << endl;
    cout << "========== SUMMARY OF SALES ==========" << endl;
    
    cout << "Town \t\t\t\t\t\tSales\n";
    
    for(int i = 0; i < 5; i++){
        cout << town[i] << "\t\t\t\t" << sales[i] << endl;
    }
    
    
    
    cout << endl;
    return 0;
}
