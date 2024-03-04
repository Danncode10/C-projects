#include <iostream>
#include <cmath>

using namespace std;
//Functions
double cmToFt(double num){
	return num / 2.54;	//Step 1: Convert cm to inch
}
double cmToIn(double num){
	return num * 12; //Step 4
}

int main(){
	double number, deci;
	double in;
	double feet;
	
	cout << "How many cm? ";
	cin >> number;
	
	feet = cmToFt(number)/12; //Step 2
	int feet2 = feet;
	deci = feet - feet2; // Step 3
	in = round(cmToIn(deci));
	
	cout << feet2 << " ft " << in << " in ";
	
	return 0;
}
