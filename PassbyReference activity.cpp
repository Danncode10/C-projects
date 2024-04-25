#include <iostream>
using namespace std;

//  PassbyReference activity.cpp
//  Midterm Review Intermediate Programming
//
//  Created by Lester Dann Lopez on 4/25/24.


void getInput(double &a, double &b){
    cout << "Enter Current reading: ";
    cin >> a;
    cout << "Enter Previous reading: ";
    cin >> b;
}
void calcBill(double a, double b, double &units, double &charge){
    double charge_per_unit = 0.09;
    units = a - b;
    charge = units * charge_per_unit;
}
void displayBill(double &units, double &charge){
    cout << "Unit used: " << units << endl;
    cout << "Charge per unit: * .09" << endl;
    cout << "Total Charge: $" << charge;
}


int main(){
    double current, previous, units, charge;
    getInput(current, previous);
    calcBill(current, previous, units, charge);
    displayBill(units, charge);
    
//   53512
//   51875
    
    cout << endl;
    cin.get();
}
