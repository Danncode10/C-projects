#include <iostream>
using namespace std;

int main(){
    int id[] = {110,111,112,113,114,115,116,117,118,119};
    string item[] = {"Glass", "Replicator", "Segway", "Clavinova", "Phantom", "Raspberry", "Thermostat", "Fitbit", "Netflix", "Discman"};
    int price[] = {1500, 2000, 1800, 2500, 3000, 35, 20000, 99, 100, 500};
    int numItems;
    int checkId;
    
    int size = sizeof(id)/sizeof(id[0]);
    
    cout << "Product ID \t\tItem\t\t\tPrice" << endl;
    
    //menu
    for(int i = 0; i < size;i++){
        cout << id[i] << "\t\t\t\t" << item[i] << "\t\t\t" << "$" << price[i] << endl;
    }
    
    cout << "Number of Items: ";
    cin >> numItems;
    
    //empty array
    int quantity[numItems];
    int newPrice[numItems];
    bool running = false;
    int correctPrice[numItems];
    string correctItem[numItems];
    int subtotal[numItems];
    
    for(int i = 0; i < numItems; i++){
        
        //        while(running){
        
        cout << i+1 << ". Enter item id: ";
        cin >> checkId;
        
        for(int j = 0; j > size; j++){
            if(checkId == id[j]){
                correctPrice[i] = id[j];
                correctItem[i] = item[j];
                i--;
                running = true;
            }
        }
        //}
        //while(running){
        cout << "Enter number of quantity: ";
        cin >> quantity[i];
        
        //}
    }
        //Calculate SubTotal
        for(int i = 0; i < numItems; i++){
            subtotal[i] = quantity[i] * correctPrice[i];
        }
        
        cout << "SUMMARY OF PURCHASED" << endl;
        cout << "Item\t\t\t" << "Quantity\t\t\t" << "Price\t\t\t" << "Sub Total" << endl;
        
        for(int i = 0; i < numItems; i++){
            cout << i+1 << ". " << correctItem[i] << "\t\t\t" << quantity[i] << "\t\t\t" << correctPrice[i] << subtotal[i] << endl;
            
        }
        
    
    
    cout << endl;
    return 0;
}
