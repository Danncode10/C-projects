#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void drawBoard(char *spaces){
    cout << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << endl;
    cout << "     |     |     " << endl;
}

void playerMove(char *spaces, char player){
    int number;
    
    do{
        cout << "Enter a spot to place a marker (1-9): ";
        cin >> number;
        number--; //kase nga gusto naten ung user input na 1-9 lang, kaya mag minus 1;
        
        if(spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
        
    }while(!number > 0 || !number < 8);
}

void computerMove(char *spaces, char computer){
    int number;
    srand(static_cast<unsigned int>(time(0)));
    while(true){
        number = rand() % 9;
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
}

bool checkWinner(char *spaces, char player, char computer){
    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]){
        spaces[0] == player ? cout << "You win" : cout << "You Lose" << endl;
    }
    else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]){
        spaces[0] == player ? cout << "You win" : cout << "You Lose" << endl;
    }
    else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]){
        spaces[0] == player ? cout << "You win" : cout << "You Lose" << endl;
    }
    else if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[5]){
        spaces[0] == player ? cout << "You win" : cout << "You Lose" << endl;
    }
    else if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]){
        spaces[0] == player ? cout << "You win" : cout << "You Lose" << endl;
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]){
        spaces[0] == player ? cout << "You win" : cout << "You Lose" << endl;
    }
    else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]){
        spaces[0] == player ? cout << "You win" : cout << "You Lose" << endl;
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]){
        spaces[0] == player ? cout << "You win" : cout << "You Lose" << endl;
    }
    else{
        return false;
    }
    
    return true;
    
}

bool checkTie(char *spaces){
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    cout << "IT'S A TIE";
    return true;
}

    

int main(){
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    
    char player = 'X';
    char computer = 'O';
    
    bool running = true;
    
    drawBoard(spaces);
    
    while(running){
        playerMove(spaces, player);
        //drawBoard(spaces);
        
        computerMove(spaces, computer);
        drawBoard(spaces);
        
        if(checkWinner(spaces,player, computer)){
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            running = false;
            break;
        }
        
    }
    
    cout << "\nThank you for playing" << endl;
    
    cout << endl;
    cin.get();
    return 0;
}

