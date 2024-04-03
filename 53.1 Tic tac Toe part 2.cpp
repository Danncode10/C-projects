#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void showBoard(char* spaces){
    cout << "     |     |     " << endl;
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << endl;
    cout << "     |     |     " << endl;

}

void yourChoice(char* spaces, char player){
    int number;
    do{
        cout << "Enter a spot to place a marker (1-9): ";
        cin >> number;
        number--;//kase nga gusto naten ung user input na 1-9 lang, kaya mag minus 1;
        
        if(spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
        
    }while(!(number > 0) || !(number < 8));//---------------> This part is the game changer
    
}


void computer(char* spaces, char computer){
    int num;
    srand(static_cast<unsigned int>(time(0)));
    while(true){
        num = rand()% 9;
        if(spaces[num] == ' '){
            spaces[num] = computer;
            break;
        }
    }
}

bool winner(char *spaces, char player){
//    0 1 2
//    3 4 5
//    6 7 8
    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]){
        spaces[0] == player ? cout << "You Win" : cout << "You Lose" << endl;
    }
    else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]){
        spaces[0] == player ? cout << "You Win" : cout << "You Lose" << endl;
    }
    else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]){
        spaces[0] == player ? cout << "You win" : cout << "You Lose" << endl;
    }
    else if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]){
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

bool if_tie(char* spaces){
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
            
        }
    }
    cout << "Its a TIE" << endl;
    return true;
}


int main(){
    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    bool running = true;
    
    char player = 'X';
    char com = 'O';
    showBoard(spaces);
    
    while(running){
        yourChoice(spaces, player);
        computer(spaces, com);
        showBoard(spaces);
        
        if(winner(spaces, player)){
            running = false;
        }
        else if(if_tie(spaces)){
            running = false;
        }
    }
    
    cout << endl;
    return 0;
}


