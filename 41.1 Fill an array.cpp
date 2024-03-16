#include <iostream>

using namespace std;

int main() {
    string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);

    for (int i = 0; i < size; i++) {
        cout << "Enter a food you like or 'q' to quit: #" << i + 1 << ": ";
        getline(cin, foods[i]);
        
        if(foods[i] == "q"){
        	break;
		}
    }

    cout << "\nYou Like the following foods\n";

    for(int i = 0; i < size; i++){
    	cout << foods[i] << endl;
	}
	
    return 0;
}

