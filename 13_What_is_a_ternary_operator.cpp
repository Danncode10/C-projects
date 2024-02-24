#include <iostream>

using namespace std;

int main(){
        //Ternary operator ?: = replacement to an if/else statement
        // condition ? expression1 : expression 2;

        //example 1: Using if/else statement

        int grade;

        cout << "Input Grade: ";
        cin >> grade;
        if(grade >=75){
            cout << "You Pass! "<< endl;
        }
        else{
            cout << "You Failed!";
        }

        //Using ternary operator

        int grade2;

        cout << "Input Grade 2: ";
        cin >> grade2;

        grade2 >=75 ? cout << "You Pass! " : cout << "You Failed! ";

        //Example : Even or odd numbers

        int num;

        cout << "Input Number: ";
        cin >> num;

        num % 2 == 1 ? cout << "It is Odd" : cout << "It is even";

    return 0;
}
