#include <iostream>
using namespace std;

char p = 'P';
char r = 'R';
char b = 'B';
char x = 'X';
char q = 'Q';
char k = 'K';

void showBoard(char board[][8]){
    cout << "\n_________________________________________________" << endl;
    for(int i = 0; i < 8; i++){
        cout << "|     |     |     |     |     |     |     |     |" << endl;
        for(int j = 0; j < 8; j++){
            if(j == 7){
                cout << "|  " << board[i][j] << "  |";
            }
            else{
                cout << "|  " << board[i][j] << "  ";
            }
        }
        cout << endl;
        cout << "|_____|_____|_____|_____|_____|_____|_____|_____|" << endl;
    }
}

void enterMove(char board[][8]){
    char piece;
    string location;
    
    cout << "Enter Move (ex. Pa3 = 'Pawn move at A3'): ";
    cin >> piece >> location;
}

int main(){
//    P = pawn
//    R = Rook
//    B = Bishop
//    X = Knight
//    Q = Queen
//    K = King
    
    //Always Play as White
    char board[8][8] = {
        {r,x,b,q,k,b,x,r}, // 7
        {p,p,p,p,p,p,p,p}, // 6
        {' ',' ',' ',' ',' ',' ',' ',' '}, // 5
        {' ',' ',' ',' ',' ',' ',' ',' '}, // 4
        {' ',' ',' ',' ',' ',' ',' ',' '}, // 3
        {' ',' ',' ',' ',' ',' ',' ',' '}, // 2
        {p,p,p,p,p,p,p,p}, // 1
        {r,x,b,q,k,b,x,r} // 0
    };
    
    showBoard(board);
    
    bool checkmate = false;
    while(!checkmate){
        enterMove(board);
    }
    
    
    cout << endl;
    return 0;
}
