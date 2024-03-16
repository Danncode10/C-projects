#include <iostream>
using namespace std;

int main(){
	
	string foods[5];
	int size = sizeof(foods)/sizeof(foods[0]);
	
	for(int i = 0; i < size; i++){
		cout << "Enter a food you like (press 'q' to quit) #" << i + 1 << ":";
		getline(cin, foods[i]);
		if(foods[i] == "q"){
			foods[i] = foods[i].empty();
			break;
		}
	}
	
	cout << "\nYou like the following food: \n";
	
	for(int i = 0; !(foods[i]=="") ; i++){
		cout << foods[i] << endl;
	}
	
	}
