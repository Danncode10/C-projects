#include <iostream>
using namespace std;

int main(){
	int size = 10;
	int numbers[size] = {}; // I want my array to have 10 elements from 0 to 9;
	for(int i = 0; i <= size; i++){
		numbers[i] = i;
	}
	
	cout << "{";
	for(int i = 0; i < size; i++){
		cout << numbers[i];
		if(i==size - 1){
			cout << " ";
		}
		else{
			cout << ", ";
		}
	}
	cout << "}";
	
	cin.get();
	return 0;
}
