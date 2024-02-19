#include <iostream>
using namespace std;

//GLOBAL VARIABLES: 
int pin = 2219;
int balance = 10000;
bool exit_variable = true;

void enter_pin(){
	int entered_pin;
	int wrong = 3;
	
	bool running = true;
	while(running){
		cout << "ENTER PINCODE: ";
		cin >> entered_pin;	
		
		if(entered_pin != pin){
			wrong --;
			
				if(wrong > 0){
					cout << "Wrong pincode! " << wrong << " more attempt/s" << endl;
					running = true;
				}
				else{
					cout << "\nYou entered wrong pincode 3 times...\n"
						<< "Your card was blocked, please contact your card provider...\n";
					exit_variable = false; // Ends the code if pin wrong 3 times
					break; // para ndi maulit ung loop
				}
		}
		else{// pag tugma yung entered_pin sa pin
			running = false;
		}
	}
}

char menu(){
	char op;
    do {
        cout << "\nCHOOSE OPERATION: " << endl;
        cout << "[d or D] - DEPOSIT\t\t\t"
            << "[w or W] - WITHDRAW\n"
            << "[b or B] - BALANCE INQUIRY\t\t"
            << "[c or C] - CHANGE PIN\n"
            << "[q or Q] - EXIT PROGRAM\n"
            << "OPERATION: ";
        cin >> op;

        if (!(op == 'd' || op == 'D' || op == 'w' || op == 'W' || op == 'b' || op == 'B' || op == 'c' || op == 'C' || op == 'q' || op == 'Q')) {
            cout << "INVALID KEY! \n";
        }

    } while (op != 'd' && op != 'D' && op != 'w' && op != 'W' && op != 'b' && op != 'B' && op != 'c' && op != 'C' && op != 'q' && op != 'Q');

    return op;
}

	void exit_function(){
			char choice;
			do{
				cout << "Would you like to make another transaction?\n"
				<< "Press\t[y/Yes]\t\t[n/No]\t\t:";
				cin >> choice;
				if(!(choice == 'y' || choice == 'n')){
					cout << "Invalid Input!";
				}
			}while(choice != 'y' && choice != 'n');
			
				if(choice == 'n'){
					exit_variable = false; // connected to sa running sa main.
				}
			
	}

				void deposit(){
					int amount;
					enter_pin();
					cout << "ENTER AMOUNT TO DEPOSIT: ";
					cin >> amount;
					
					balance += amount;
				}
				
				void withdraw(){
					int amount;
					enter_pin();
					cout << "ENTER AMOUNT TO DEPOSIT: ";
					cin >> amount;
					
					balance -= amount;
				}
				
				void balanceInquiry(){
					enter_pin();
					cout << "BALANCE: " << balance << endl;
				}
				
				void changePin(){
				int oldPin, newPin;
				
				bool running = true;
				while(running){
				
					cout << "ENTER OLD PIN: ";
					cin >> oldPin;
					
					if(oldPin == pin){
						running = false;
					}
					else{
						cout << "WRONG PIN!" << endl;
					}
				}
				
				cout << "ENTER NEW PIN: ";
				cin >> newPin;
				
				pin = newPin;
				
			}

void operation(char choice){
	switch(choice){
		case 'd' : case 'D':
			deposit();
			break;
		case 'w' : case 'W':
			withdraw();
			break;
		case 'b' : case 'B':
			balanceInquiry();
			break;
		case 'c' : case 'C':
			changePin();
			break;
		case 'q' : case 'Q':
			break;
	}
}



int main(){
	char choice;
	enter_pin();
	
	
	bool running = true;
	while(running){
		running = exit_variable; // dpat mauna to para ma read yung value ng exit_variable
			if(exit_variable = false){
				break;
			}
		choice = menu();
			if(choice == 'q' || choice == 'Q'){
				break;
			}
		operation(choice);
	}
	
	return 0;
}
