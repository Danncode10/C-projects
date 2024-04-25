#include <iostream>
using namespace std;

int main(){
    char letter[10];
    char compare;
    int count = 0;
    
    for(int i = 0; i < 10; i++){
        cout << i+1 << ". Enter any letter: ";
        cin >> letter[i];
    }
     
    cout << "Enter Letter to Count: ";
    cin >> compare;
    
    for(int i = 0; i < 10; i++){
        if(letter[i] == compare){
            count++;
        }
    }
    
    cout << "Number of " << compare << " is: " << count;
    
    cout << endl;
    return 0;
}
