#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double entry, lev, stopLoss;
    string pos;

    cout << "Position: BUY or SELL? (Check for Spelling and use Capital letters):";
    cin >> pos;

    if (pos != "BUY" && pos != "SELL") { // What this part means != is not equal to, 
        cout << "Invalid position entered. Only accepts BUY or SELL." << endl; // Error message
        return 1; // Exit with an error code
    }

    cout << "Entry Price :";
    cin >> entry;

    if (entry < 0){
        cout << "Entry Price cannot be below zero." ;
        return 1;
    }

    cout << "Leverage (1 : x):";
    cin >> lev;


    if (lev == 0) {
        cout << "Leverage cannot be zero.";
        return 1; // Exit with an error code
    }
    else if(lev < 0){
        cout << "Leverage cannot be below.";
        return 1; // Exit with an error code
    }

    if (pos == "BUY") {
        stopLoss = entry * (1 - (0.03 / lev));
    } else if (pos == "SELL") {
        stopLoss = entry * (1 + (0.03 / lev));
    }

    cout << "Stop Loss: " << stopLoss;

    return 0;
}
