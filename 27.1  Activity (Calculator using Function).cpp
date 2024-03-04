/*
Lesson 27.1  Activity (Calculator using Function)

In this activity:

	1. The program prompts the user to input two numbers and an operator.
	2. Based on the entered operator, the program calls the corresponding function to perform the calculation.
	3. The result is then displayed.
	
				This activity allows you to practice user input, basic conditional statements (using switch), 
			and function calls without introducing more advanced concepts.
*/

#include <iostream>
using namespace std;

double sum(double x, double y){
	return x + y;
}
double sub(double x, double y){
	return x - y;
}
double mul(double x, double y){
	return x * y;
}
double div(double x, double y){
	return x / y;
}

int main(){
	double num1, num2;
	char op;
	
	do{
		cout << "Enter Operation (+,-,*,/): ";
		cin >> op;
	}while(op!='+' && op!='-' && op!='*' && op!='/');//Take Note 1, we use logical AND (&&) and not OR (||). Why? Answers below.
		cout << "Enter the first number: ";
		cin >> num1;
		cout << "Enter the first number: ";
		cin >> num2;
	
	
	switch(op){
		case '+':
			cout << num1 << " + " <<num2 << " = " << sum(num1, num2);
			break; //Take Note: Dont forget the break
		case '-':
			cout << num1 << " - " <<num2 << " = " << sub(num1, num2);
			break;
		case '*':
			cout << num1 << " * " <<num2 << " = " << mul(num1, num2);
			break;
		case '/':
			cout << num1 << " / " <<num2 << " = " << div(num1, num2);
			break;
		default:
			cout << "Error Value, Enter these value (+,-,*,/): ";
			break;
	}
	
	return 0;
}

/*
Questions and Answers:
	Why we use &&, instead of || in Take note 1?
		Answer:
		
		In the context of the do-while loop condition, using the logical AND (&&) is the correct choice. Let me explain why.
	The condition op != '+' && op != '-' && op != '*' && op != '/' checks if the entered operator is not equal to any of 
	the specified characters (+, -, *, /). If any of these conditions is false, the loop continues. So, it's like saying "continue 
	the loop as long as op is not any of these operators."
	
		On the other hand, if you used the logical OR (||) operator, the loop would continue as long as op is not equal to at least one 
	of the specified characters. This could lead to an infinite loop because there is no way for op to be all of +, -, *, and / simultaneously.
	So, using the logical AND ensures that op is different from each of the specified operators, which is the condition you want to 
	check before proceeding with the rest of the program.

*/










































