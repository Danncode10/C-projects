#include <iostream>
#include <cstdlib>
#include <random>
using namespace std;

string tao = "";
string makina = "";

char enterchoice(){
	char ch;
	while(ch != 'r' && ch != 'p' && ch !='s'){
		cout << "r-rock\np-paper\ns-scissors\n\nEnterChoice: ";
		cin >> ch;
	}
	switch(ch){
					case 'r': tao = "ROCK";
						break;
					case 'p':tao = "PAPER";
						break;
					case 's':tao = "SCISSORS";
						break;
					}
	return ch;
}

char computerChoice(){
	srand(time(0));
	int num = rand() % 2;
	
	switch(num){
		case 0: 
			return 'r';
			makina = "ROCK";
			break;
		case 1:
			return 'p';
			makina = "PAPER";
			break;
		case 2:
			return 's';
			makina = "SCISSORS";
			break;
		}
	}

void showChoice(){
	cout << "\nYour Choice: " << tao;
	cout << "\nComputer: " << makina;
	}

void compare(char human, char computer){
	switch(human){
		case 'r':
				switch(computer){
					case 'r': cout << "Its a tie. "<< endl;
						break;
					case 'p':cout << "You Lost. "<< endl;
						break;
					case 's':cout << "You Win. "<< endl;
						break;
					}
			break;
		case 'p':
					switch(computer){
					case 'r':cout << "You Win. "<< endl;
						break;
					case 'p':cout << "Its a tie. "<< endl;
						break;
					case 's':cout << "You Lost. "<< endl;
						break;
					}
			break;
		case 's':
					switch(computer){
					case 'r':cout << "You Lost. "<< endl;
						break;
					case 'p':cout << "You Win. "<< endl;
						break;
					case 's':cout << "Its a tie. "<< endl;
						break;
					}
			break;
		}
	}
bool repeat(){
	char choice;
	while(true){
		cout << "press 'y' to run again or 'x' to stop: ";
		cin >> choice;
			if(choice == 'y'){
				return true;
				}
			else if(choice == 'x'){
				return false;
				}
			else{
				cout << "Invalid Pin! "<< endl;
				}
		}
	}

int main(){
	bool running = true;
	while(running){
		char choice = enterchoice();
		char computer = computerChoice();
		showChoice();
		compare(choice,computer);
		running = repeat();
	}
	
	return 0;
	}