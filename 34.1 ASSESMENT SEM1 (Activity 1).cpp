/*
Activity: Interactive Calculator

Objective: Implement a basic calculator that can perform addition, subtraction, multiplication, and division.
Input: Two numbers and the operation (+, -, *, /) as user input.
Output: Display the result of the calculation.

Example:
----------------------------------------------------------------------------------------------------------------

											Enter first number: 10
											Enter second number: 5
											Enter operation (+, -, *, /): *
											Result: 50

*/

#include <iostream>
using namespace std;

double condition(char op, int num1, int num2){
	double result;
	switch (op){
		case '+': return result = num1+num2;
			break;
		case '-': return result = num1-num2;
			break;
		case '*': return result = num1*num2;
			break;
		case '/': return result = num1/num2;
			break;
	}
}

int main(){
	int num1;
	int num2;
	char op;
	double res;
	
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	
	do{
		cout << "Enter operation (+, -, *, /): ";
		cin >> op;
		
		res = condition(op, num1, num2);
	
	}while(op !='+' && op != '-' && op !='*' && op != '/');
	cout << "Result: " << res;
	
	cin.get();
	return 0;
}

//SCORE: 90/100












