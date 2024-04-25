#include <iostream>
using namespace std;

//global variable
string x[2][20] = {
    {
        "A1", "A2",
        "A3", "A4",
        "A5", "A6",
        "A7", "A8",
        "A9", "A10",
        "A11", "A12",
        "A13", "A14",
        "A15", "A16",
        "A17", "A18",
        "A19", "A20"
    },
    {
        "B1", "B2",
        "B3", "B4",
        "B5", "B6",
        "B7", "B8",
        "B9", "B10",
        "B11", "B12",
        "B13", "B14",
        "B15", "B16",
        "B17", "B18",
        "B19", "B20"
    }
};

//magagamit tong array na to sa occupied na function
string orig[2][20] = {
    {
        "A1", "A2",
        "A3", "A4",
        "A5", "A6",
        "A7", "A8",
        "A9", "A10",
        "A11", "A12",
        "A13", "A14",
        "A15", "A16",
        "A17", "A18",
        "A19", "A20"
    },
    {
        "B1", "B2",
        "B3", "B4",
        "B5", "B6",
        "B7", "B8",
        "B9", "B10",
        "B11", "B12",
        "B13", "B14",
        "B15", "B16",
        "B17", "B18",
        "B19", "B20"
    }
};

void display(){
    cout << "\nBUS A\t\t\t\tBUS B\n\n";
    
    for(int i = 0; i < 20; i+=2){
        cout << x[0][i] <<"\t\t" << x[0][i+1] << "\t\t" << x[1][i] << "\t\t" << x[1][i+1] << endl;
    }
}

void occupied(string entered, int position, int bus){
    if(entered == orig[bus][position] && x[bus][position] == "XX"){
        cout << "This seat is occupied!\n";
    }
}

void enter(){
    string entered;
    int position = 0;
    int bus = 0;
    
    bool valid = false;
   
    while(!valid){
        bool enter_occupied = false;// dpat nasa loob eto ng while loop para pag yung value neto naging true, pwede bumalik sa false
        
        cout << "\nEnter the bus number to reserve: ";
        cin >> entered;
        
        for(int i = 0; i < 20; i++){

            if(x[0][i] == entered){
                x[0][i] = "XX";
                position = i;
                bus = 0;
                valid = true;
            }
            else if(x[1][i] == entered){
                x[1][i] = "XX";
                position = i;
                bus = 1;
                valid = true;
            }
            
            // Para magkaroon ng value yung bus at position at hndi siya [0,0] pag ..
            else if(orig[0][i] == entered){
                bus = 0;
                position = i;
                enter_occupied = true;
//--------------------> valid = false; para mag run siya sa occupied()
            }
            else if(orig[1][i] == entered){
                bus = 1;
                position = i;
                enter_occupied = true;
            }
        }
        //TEST
//        cout << "Valid: " << !valid << endl;
//        cout << "enter: " << !enter_occupied << endl;
//1,0
        if(!valid && enter_occupied == true){
            occupied(entered, position, bus);
        }
//1,1
        if(!valid && enter_occupied == false){
            cout << "Invalid Input!\n";
            
        }
    }
    
}

bool pagPuno(){
    for(int i = 0; i < 20; i++){
        if(x[0][i] != "XX" || x[1][i] != "XX"){
            return false;
        }
    }
    return true;// ibigsabihin na execute lahat
}


int main(){
    bool full = false;
    
    while(!full){
        display();
        enter();
        full = pagPuno();
    }
    cout << "Bus is Full" << endl;
}
