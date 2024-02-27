#include <iostream>
using namespace std;

int main(){
    double temp;
    char unit;

    cout << "--------------Temperature Conversion--------------" << endl;
    cout << "F = Fahrenheit\n"; //  \n means new line, same as << endl
    cout << "C = Celcius\n";
    cout << "What Unit you want to convert to: (Type F or C)\n";
    cin >> unit;

    if(unit == 'F' || unit == 'f'){
    cout << "Enter the temperature in Celcius: ";
        cin >> temp; 

        temp = (1.8 * temp) + 32;
        cout << "Fahrenheit: " << temp << " F" << endl;
    }
    else if(unit == 'C' || unit == 'c'){
    cout << "Enter the temperature in Fahrenheit: ";
        cin >> temp; 

        temp = (temp -32)/1.8;
        cout << "Celcius: " << temp << " C" << endl;
    }
    else{
        cout << "Enter only F or C";
        1; // Kahit wla nang return 1
    }

    //In Ternary Operation mas mahirap pero mas mabilis. 

   /*
    unit == 'F' || unit == 'f'
        ? 
        cout << "Enter the temperature in Celsius: ", 
        cin >> temp,
        temp = (1.8 * temp) + 32,
        cout << "Fahrenheit: " << temp << " F" << endl
        : 
            unit == 'C' || unit == 'c'
            ? 
            cout << "Enter the temperature in Fahrenheit: ",
            cin >> temp,
            temp = (temp - 32) / 1.8,
            cout << "Celsius: " << temp << " C" << endl
            :
                cout << "Enter only F or C\n",
                1; <------------------ Etong Part na to, dapat 1 lang, wla nang return 1;

   */
    cout << "--------------------------------------------------" << endl;

    return 0;
        
}
