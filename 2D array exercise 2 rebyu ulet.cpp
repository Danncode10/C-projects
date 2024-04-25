#include <iostream>
using namespace std;

void showMenu(int *id, string* item, int* price, int size){
    cout << "Product ID\t\t\t" << "Item\t\t\t" << "Price" << endl;
    
    for(int i = 0; i < size; i++){
        cout << id[i] << "\t\t\t\t\t" << item[i] << "\t\t\t$" << price[i] << endl;
    }
}

int checkId(int *id, string* item, string* finalItem, int* price, int* finalPrice, int i){
    int entered_id;

    while(true){
        cout << i+1 << ". Enter item ID: ";
        cin >> entered_id;
        
        for(int j = 0; i < 10; j++){
            if(entered_id == id[j]){
                finalItem[i] = item[j];
                finalPrice[i] = price[j];
                return 0; // may connection to sa "i -= checkId(id);"
                break;
            }
        }
    }
    return 1;
}

int main(){
    int id[10] = {110, 111, 112, 113, 114, 115, 116, 117, 118, 119};
    string item[10] = {"Glass", "Replicator", "Segway", "Clavinova", "Phantom", "Raspberry", "Thermostat", "Fitbit", "Netflix", "Discam"};
    int price[10] = {1500, 2000, 1800, 2500, 3000, 35, 20000, 99, 100, 500};
    
    showMenu(id, item, price, 10);
    
    int item_size;
    cout << "\nEnter Number of Items: ";
    cin >> item_size;
    
    //Empty Arrays
    int finalPrice[item_size];
    string finalItem[item_size];
    int quantity[item_size];
    
    for(int i = 0; i < item_size; i++){
        i -= checkId(id, item, finalItem, price, finalPrice, i);
        cout << "\tEnter number of quantity: ";
        cin >> quantity[i];
    }
    
    //get Subtotal
    int subtotal[item_size];
    
    for(int i = 0; i < item_size; i++){
        subtotal[i] = quantity[i] * finalPrice[i];
    }
    
    int total = 0;
    cout << "\nSUMMARY OF PURCHASED" << endl;
    cout << "Item\t\t\t" << "Quantity\t\t\t" << "Price\t\t\t" << "Sub Total" << endl;
    
    for(int i = 0; i < item_size; i++){
        cout << i+1 << ". " << finalItem[i] << "\t\t\t" << quantity[i] << "\t\t\t\t$" << finalPrice[i] << "\t\t\t$" << subtotal[i] << endl;
         
        total += subtotal[i];
    }
    cout << "GRAND TOTAL: $" << total << endl;
}
