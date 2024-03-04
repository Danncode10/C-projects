#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

char getUserChoice(){
	char player;
	do{
		cout << "Rock-Paper-Scissors\n";
		cout << "*******************************\n";
		cout << "R-Rock\n"
			<< "P-Paper\n"
			<< "S-Scissor\n----> ";
		cin >> player;
	}while(player != 'r' && player != 'p' && player != 's');
	
	return player;
}

char getComputerChoice(){
	srand(time(0));
	int num = rand() % 3 + 1;
	
	switch(num){
		case 1: return 'r';
			break;
		case 2: return 'p';
			break;
		case 3: return 's';
			break;
	}
}
void showChoice(char choice){
	switch(choice){
		case 'r': 
			cout << "Rock";
			break;
		case 'p': 
			cout << "Paper";
			break;
		case 's':
			cout << "Scissors";
			break;
		// Okay lang wlang default
	}
}

void chooseWinner(char player, char computer){
	
	switch(player){
		case 'r': 
			if(computer == 'r'){
				cout << "Its a tie!\n";
			}
			else if(computer == 'p'){
				cout << "You Lose. ^_^\n";
			}
			else{
				cout << "You Win";
			}
					break;
		case 's':
			if(computer == 's'){
				cout << "Its a tie!\n";
			}
			else if(computer == 'r'){
				cout << "You Lose. ^_^\n";
			}
			else{
				cout << "You Win";
			}
					break;
		case 'p':
			if(computer == 'p'){
				cout << "Its a tie!\n";
			}
			else if(computer == 's'){
				cout << "You Lose. ^_^\n";
			}
			else{
				cout << "You Win";
			}
					break;
	}
}


int main(){
	char player;
	char computer;
	
	player = getUserChoice();
	cout << "Your Choice: "; //<< showChoice(player); TAKE NOTE: pag void function, hindi siya pwede sa line ng cout. REMEMBER THIS
	showChoice(player);
	cout << "\n";
	
	computer = getComputerChoice();
	cout << "Computer Choice: ";
	showChoice(computer);
	
	
	cout << "\nWinner: "; 
	chooseWinner(player, computer);
	
	
	cin.get();
	return 0;
}
























