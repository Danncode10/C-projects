#include <iostream>
using namespace std;

int main(){
	int size;
	
	cout << "Enter Size: ";
	cin >> size;
	
	//		i = 5
	for(int i = size; i>=1 ;i--){
	//			j = 5	stops = 1
		for(int j = i; 	j > 0; 	j--){
			cout << "*";
		}
		cout << endl;
	}
}


