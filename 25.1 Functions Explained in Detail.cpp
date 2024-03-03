#include <iostream>
using namespace std;
//functions

void sayHello(){
	cout << "Hello World\n";
}

int cube(double x){
	return x*x*x;
}
// The parameter can be more than 1
int midPoint(double num1, double num2){
	return (num1 + num2)/2;
}

int main(){
	sayHello();
	
	cout << cube(3) << endl;
	//Example 3
	
	int uno = 10;
	int dos = 20;
	
	cout << "The midPoint of " << uno << " and " << dos << " is " <<midPoint(uno, dos)<<endl;
	
	return 0;
}
