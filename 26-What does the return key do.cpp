#include <iostream>
using namespace std;

double square(double length);
double cube(double length);
//Example 3
string concatStrings(string string1, string string2);

// Why is it double and not void? Explained below

int main(){
	
	//return - return a value back to the spot
	//		- where you called the encompassing function
	
//Example 1
	
	double length = 5;
	
	double area = square(length);
	double volume = cube(length);
	
	cout << "Area: " << area <<"cm^2\n";
	cout << "Volume: " << volume <<"cm^3\n";
	
	cout << "Example 3";
	
	string fname = "Dann";
	string lname = "Lopez";
	
	string fullname = concatStrings(fname ,lname);
	
	cout << "Your name: " << fullname;
	
	
	
	return 0;
}

double square(double length){
	double result = length*length;
	return result;
	
	//////instead of using void, we use double because you are returning a value that is a data type of double/////
}

double cube(double length){
	double result = length*length*length;
	return result;
	
}

string concatStrings(string string1, string string2){
	return string1 + " " + string2;
	//we dont use the <<, we use +, kase string siya, pag dudugtungin
} 
























