#include <iostream>
using namespace std;

int searchArray(int array[], int size, int element){
	for(int i = 0; i < size; i++){
		if(array[i] == element){
			return i;
		}//Do not use else, kasi loop eto
	
	}
	return -1; // '-1' means something wasnt found
	//Take note: dapat nasa labas siya, 
	//kase dapat matapos muna yung buong loop
}

int main(){
	int numbers[] = {1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(numbers)/sizeof(numbers[0]);
	
	int index;
	int myNum;
	
	cout << "Enter Element to Search For: ";
	cin >> myNum;
	
	index = searchArray(numbers, size, myNum);
	
	if(index == -1){
		cout << myNum << " is not in the array";
	}
	else{
		cout << myNum << " is at index " << index;
	}
	
	cin.get();
	return 0;
}
