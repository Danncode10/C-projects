#include <iostream>
using namespace std;

void for_loop(){
	//for
	cout << "Example of 'For' Loops" <<endl <<endl;
	for(int i = 1; 						i<=10; 							i++){
	//   variable declaration			if true, execute the code		same as i = i+1
	//									if false, it is out if the loop
	cout <<"The value is "<< i << endl;
	}
}

void while_loop(){
	int a = 10;//Try to change the value to 40, the code is just blank
	while(		a < 30		){
				//if true, Execute the code below
		cout << "Value of a is: " << a << endl;
		a++;
		}
	}
	
void do_loop(){
	int a = 0;
	do{
		cout << "The value of is " << a <<endl;
		a++;
	}while(a<10);
}

void do_loop2(){
	int num;
	
	do{
		cout << "enter number less than zero: ";
		cin >> num;
	}while(num > 0); // It will only take values less than zero
			//if this statement is true, the code will go back until it get its correct value
			//in short, If true, babalik sa taas
}


int main(){
	//Summary of Lopps in c++
	char choice;
	cout << "[1]For\n[2]While\n[3]Do While\n[4]Do While Example 2\n\nEnter choice: ";
	cin >> choice;
	
	switch(choice){
		case '1': for_loop();
			break;
		case '2': while_loop();
			break;
		case '3': do_loop();
			break;
		case '4': do_loop2();
			break;
		default: cout << "Invalid Input";
			break;
	}
	
	cin.get();
	return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
