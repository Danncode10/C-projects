#include <iostream>
using namespace std;

int main(){
    double invest, price, fee, stop, take;
    string name;
    
    cout << "Enter Crypto name: ";
    cin >> name;
    
    cout << "Enter Money Invested: ";
    cin >> invest;
    
    cout << "Enter Current Price: ";
    cin >> price;
    
    cout << "Enter Fee(whole number %): ";
    cin >> fee;
    
    if(price < invest){
        stop = invest-((invest*0.05)+invest*(fee/100));
    }
    
    else{
        stop = price-((price*0.05)+price*(fee/100));
    }
    
    take = invest + (invest*0.05)+(invest*(fee/100));
    
    cout <<"\n"<< name << endl;
    cout << "Stop Loss: " << stop << endl;
    cout << "Take Profit: " << take << endl;
    
    
    
    return 0;
    }
