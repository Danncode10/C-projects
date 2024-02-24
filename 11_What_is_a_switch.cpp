#include <iostream>

using namespace std;

int main() {

    /*
    This is an example of an inefficient code using if statement.
    
    int month;

    cout << "Enter Month (1-12);
    cin >> month;

    if(month=1){
        cout << "January";
    }

    if(month=1){
        cout << "February";
    }

    if(month=1){
        cout << "March";
    }

    etc....

    if(month=12){
        cout << "December";
    }

    cout << "You are born in " month;

    "
     instead do this...
    */

    int month;

    cout << "Enter month :";
    cin >> month;

    switch (month) {
        case 1: // Take not, use a collon(:) not (;) 
            cout << "January" << endl;
            break; // Don't forget the break.
        case 2:
            cout << "February" << endl;
            break;
        case 3:
            cout << "March" << endl;
            break;
        case 4:
            cout << "April" << endl;
            break;
        case 5:
            cout << "May" << endl;
            break;
        case 6:
            cout << "June" << endl;
            break;
        case 7:
            cout << "July" << endl;
            break;
        case 8:
            cout << "August" << endl;
            break;
        case 9:
            cout << "September" << endl;
            break;
        case 10:
            cout << "October" << endl;
            break;
        case 11:
            cout << "November" << endl;
            break;
        case 12:
            cout << "December" << endl;
            break;
        // Use the default case if you enter a number not in the range 1-12
        default:
            cout << "Please Enter only numbers from (1-12)";
    }


    // Example 2

    char grade;

    cout << "What is your Letter Grade: ";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "You did great! " << endl;
            break;
        case 'B':
            cout << "You did Good! " << endl;
            break;
        case 'C':
            cout << "You did Shit! " << endl;
            break;
        case 'D':
            cout << "You did Terrible! " << endl;
            break;
        case 'F':
            cout << "You FAILED !!";
            break;
        default:
            cout << "Enter only capital letters (A-F)" << endl;
            break;
    }

    return 0;
}
