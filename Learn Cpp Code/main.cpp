#include <iostream>
using namespace std;

int main (){
    
    //This is a review from previous Lesson of Multidimensional arrays
    
    char letters[3][5] = {
        {'a', 'b','c','d','e'},
        {'f','g','h','i','j'},
        {'k','l','m','n','o'}
    };
    
    cout << "Display The first array: " << endl;
    
    for(int i = 0; i < 5; i++){
        cout << letters[0][i] << " ";
    }
    
    cout << "\n\nHow about show the whole array" << endl;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            cout << letters[i][j] << " ";
        }
        cout << endl;
    }
    
    cin.get();
    return 0;
}
