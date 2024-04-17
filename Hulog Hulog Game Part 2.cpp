#include <iostream>
using namespace std;

void fill_board_blank(char board[10][10]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            board[i][j] = ' ';
        }
    }
}

void showBoard(char board[10][10]){
    cout << "_____________________________________________________________" << endl;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << "|     ";
        }
        cout << "|" << endl;
        for(int j = 0; j < 10; j++){
            cout << "|  " << board[i][j] << "  ";
        }
        cout << "|" << endl;
        
        for(int j = 0; j < 10; j++){
            cout << "|_____";
        }
        cout << "|" << endl;
    }
}

int enterChoice(){
    int ch;
    while(true){
        cout << "Enter Choice (1-10): ";
        cin >> ch;
        
        if(ch > 0 && ch <= 10){
            break;
        }
        else{
            cout << "Invalid Input/n";
            continue;
        }
    }
    return ch;
}

//void player1(char board[1][10]){
//    int choice = enterChoice()-1;
//    for(int i = 9; i >= 0; i--){
//        for(int j = 9; j >= 0; j--){
//            if(board[i-j][choice-1] == ' '){
//                board[j][choice] = 'X';
//                break;
//            }
//            else if(board[i-j][choice-1] != ' '){
//                board[j-1][choice] = 'X';
//                break;
//            }
//        }
//    }
//}

void player1(char board[][10]){
    int choice = enterChoice() - 1;
    
    for(int i = 9; i >= 0; i--){
        if(board[i][choice] != ' '){
            board[i-1][choice] = 'X';
            break;
        }
        else if(board[i][choice] == ' '){
            board[i][choice] = 'X';
            break;
        }
    }
    
    cout << choice;
   
}

int main(){
    
    char board[10][10];
    
    fill_board_blank(board);
    showBoard(board);
    
    bool isThereWinner = false;
    
    while(!isThereWinner){
        player1(board);
        showBoard(board);
    }
    
    cout << endl;
    return 0;
}
