#include <iostream>
using namespace std;

//Global Variables
int pin = 1234;
double balance = 20000;

void enterPin(){
    int entered = 0;
    bool running = true;
    int tries = 3;
    
    while(running){
        cout << "Enter Pin: ";
            cin >> entered;
        if(entered == pin){
            running = false;
        }
        else{
            running = true;
            tries--;
            if(tries == 0){
                cout << "Too many Tries! Program terminated..." << endl;
                exit(0);
            }
            else{
                cout << "Wrong Pin ! You have " << tries << " tries left. " << endl;
            }
        }
    }
}

void showBalance(){
    enterPin();
    cout << "Balance: " << balance << endl;
}

void deposit(){
    double amount = 0;
    
    enterPin();
    cout << "Enter amount to Deposit: ";
    cin >> amount;
    
    balance += amount;
}

void withdraw(){
    double amount = 0;
    
    enterPin();
    cout << "Enter amount to Withdraw: ";
    cin >> amount;
    
    if(amount > balance){
        cout << "Insufficient Balance" << endl;
    }
    else{
        balance -= amount;
    }
}

void changePin(){
    
}


void showMenu(){
    char choice;
    bool running = true;
    
    while(running){
        cout << "B - Show balance\n"
        << "D - Deposit\n"
        << "W - Withdraw\n"
        << "C - Change Pin\n"
        << "X - Exit\n\nYour Choice: " << endl;
        cin >> choice;
        
        switch(choice){
            case 'B' : case 'b': showBalance();
                break;
            case 'D' : case 'd': deposit();
                break;
            case 'W' : case 'w': withdraw();
                break;
            case 'C' : case 'c': changePin();
                break;
            case 'X' : case 'x':
                cout << "Thank you for using this program..." << endl;
                exit(0);
            default:
                cout << "Invalid Key!" << endl;
                running = true;
        }
    }
}

bool again(){
    char ans;
    cout << "Would You like to run the program again? (y/n)";
    cin >> ans;
    
    while(true){
        switch(ans){
            case 'y': return true;
                break;
            case 'n': return false;
                break;
            default:
                cout << "Invalid Input! " << endl;
        }
    }
}

int main(){
    bool running = true;
    
    enterPin();
    while(running){
        showMenu();
        running = again();
        
    }
    cout << "Thank you for using this program..." << endl;
    cin.get();
    return 0;
}
