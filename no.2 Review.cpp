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
    int old = 0;
    int newPin = 0;
    int confirm;
    bool running = true;
    int tries = 3;
    
    while(running){
        cout << "Enter Old Pin: ";
            cin >> old;
        if(old == pin){
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
    
    while(true){
        cout << "Enter New Pin: ";
        cin >> newPin;
        cout << "Confirm Pin: ";
        cin >> confirm;
        
            if(newPin == confirm){
                pin = newPin;
                break;
            }
            else{
                cout << "Pin does not match" << endl;
            }
    }
}


bool again() {
    char ans;
    
    while (true) {
        cout << "Would You like to run the program again? (y/n): ";
        cin >> ans;

        switch (ans) {
            case 'y': case 'Y':
                return true;
            case 'n': case 'N':
                cout << "Thank you for using this program..." << endl;
                return false;
            default:
                cout << "Invalid Input! " << endl;
        }
    }
}

void showMenu(){
    char choice;
    bool running = true;
    
        while(running){
            cout << "B - Show balance\n"
            << "D - Deposit\n"
            << "W - Withdraw\n"
            << "C - Change Pin\n"
            << "X - Exit\n\nYour Choice: ";
            cin >> choice;
            
            switch(choice){
                case 'B' : case 'b': showBalance();
                    running = false;
                    break;
                case 'D' : case 'd': deposit();
                    running = false;
                    break;
                case 'W' : case 'w': withdraw();
                    running = false;
                    break;
                case 'C' : case 'c': changePin();
                    running = false;
                    break;
                case 'X' : case 'x':
                    cout << "Thank you for using this program..." << endl;
                    exit(0);
                default:
                    cout << "Invalid Key!" << endl;
                    running = true;
            }
        running = again();
            
    }
}


int main(){
    
    enterPin();
    showMenu();
    
    return 0;
}
