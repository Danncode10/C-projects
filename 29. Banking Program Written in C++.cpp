#include <iostream>
#include <iomanip>//This enables decimal places

#define deci_2 setprecision(2) << fixed //I made a shortcut to make it decimal in 2 decimal places

using namespace std;

void showBalance(double balance){
	cout << "Balance: $" << setprecision(2) << fixed << balance <<"\n\n";
				//This part [<< setprecision(2) << fixed] makes the balance 2 decimal places
}
double deposit(){
	double deposit;
	cout << "Deposit: $";
	cin >> deposit;
	
	if(deposit <= 0){
		cout <<deposit << " is invalid\n\n";
	}
	else{
		return deposit;
	}
}
double withdraw(double balance){
	double withdraw;
	cout << "Withdraw: $";
	cin >> withdraw;
	
	if(withdraw > balance){
		cout << "Cannot Withdraw $" <<deci_2<< withdraw << ". Your Balance is $" << deci_2 << balance <<"\n\n";
																		//deci_2 is a shortcut for 2 decimal places
	}
	return withdraw;
	return 0;
}

int main(){
	
	//Variables
		int choice = 0;
		double balance = 0;
do{
	cout << "[1] Show Balance\n"
		<< "[2] Deposit Money\n"
		<< "[3] Withdraw Money\n"
		<< "[4] Exit\n"
		<< "**************************\n"
		<< "Enter Your Choice: ";
	cin >> choice;
	
	// So there is an error when you input string variable in choice, it will go infinite.
	//To fix this error, we should put this code. 
	/*
	cin.clear();
	fflush(stdin);
	*/
	cin.clear();
	fflush(stdin);
	
	switch(choice){
		case 1: showBalance(balance);
			break;
		case 2: 
			balance += deposit();
			break;
		case 3: balance -= withdraw(balance);
			break;
		case 4: cout << "Program Terminated...";
			return 1;
			break;
		default: cout << "Invalid Input";
			break;
	}
}while(choice != 4);

	cin.get();
	return 0;
}

/*
Take Notes:
	1. #include <iomanip> and << setprecision(2) << fixed ----> This makes it decimal. 
		example:
			double balance = 90; 
			cout << "Balance: $" << setprecision(2) << fixed << balance;
			//This makes the variable have 2 decimal places.
			
			Result:
				Balance: $90.00
	2. 	
	cin.clear();
	fflush(stdin);
	
		This code fixes error. For Example, when you enter string values in a int variable, when it is in 
		do while loop, it will go infinitely. To prevent this, add this code after the cin>> variable;
		
	example:
		cout << "Enter Number";
		cin >> num;
		
		cin(clear);
		fflush(stdin);
		
	We should practice and memorize this and always put this after cin.

*/















































