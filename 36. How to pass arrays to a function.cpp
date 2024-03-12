#include <iostream>
using namespace std;

double getTotal(double prices[], int size){
	double total = 0;
	for(int i = 0; i < size; i++){
		total += prices[i];
	}
	return total;
}

int main(){
	double prices[] = {49.99, 15.05, 75, 9.99};
	int size = sizeof(prices)/sizeof(double);
	
	double total = getTotal(prices, size);
	//No need to put [] to define its an array
	cout << "$" << total;
	
	cin.get();
	return 0;
}
