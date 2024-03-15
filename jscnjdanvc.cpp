#include <iostream>
using namespace std;

void voidInsidevoid(){
    cout << "This is void inside of void" << endl;
}

void thisIsVoid(){
    //Pag Void wlang return value
    
    //Enter Statement
    cout << "This is a void function" << endl;
    
    //Void inside of void
    //Pag ganito dapat ung name nasa taas ng thisIsVoid kasi mag e-error
    
    voidInsidevoid();
}

//Return Values

int square(int x){
    int sq;
    sq = x*x;
    return sq;
}


int main(){
    cout << "This is Void" <<endl;
    thisIsVoid();
    
    //Return Values
    cout << "\nThis is return function that calculates the square" << endl;
    
    int x;
    int squared;
    cout << "Enter Number to Square: ";
    cin >> x;
    
    squared = square(x);
    
    cout << "Displays Value from array" << endl;
    cout << squared << endl<< endl;
    
    
    
    //Return
    
    //1D Arrays
    int num[5] = {1,2,3,4,5};
    string name[5] = {"One", "Two", "Three", "Four", "Five"};
    
    //Display Single Value in an array, example, Display four
    cout << "Displays Value from array using for loops" <<endl;
    cout << name[3] << endl << endl; //name[3] , ndi name[4] kase naguumpisa lahat ng index sa zero
    
    //Show what is inside of Array
    //Memorize this part
    for(int i = 0; i < 5; i++){//Yung 5 sa for loop, un ung size ng array
        cout << num[i] << "\t\t" << name[i] << endl;
    }
    
    
    return 0;
}
