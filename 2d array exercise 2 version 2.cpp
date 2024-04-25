#include <iostream>
using namespace std;

int main(){
    int id[] = {110,111,112,113,114,115,116,117,118,119};
    string item[] = {"Glass", "Replicator", "Segway", "Clavinova", "Phantom", "Raspberry", "Thermostat", "Fitbit", "Netflix", "Discman"};
    int price[] = {1500, 2000, 1800, 2500, 3000, 35, 20000, 99, 100, 500};
    int numItems;

    int size = sizeof(id)/sizeof(id[0]);
    
    cout << "Product ID \t\tItem\t\t\tPrice" << endl;
    
    // Display menu
    for(int i = 0; i < size; i++){
        cout << id[i] << "\t\t\t\t" << item[i] << "\t\t\t" << "$" << price[i] << endl;
    }
    
    cout << "\nNumber of Items: ";
    cin >> numItems;

    //Blank Arrays
    int quantity[numItems];
    int correctPrice[numItems];
    string correctItem[numItems];
    int subtotal[numItems];
    int total = 0;

    for(int i = 0; i < numItems; i++){
        bool itemFound = false;
        while(!itemFound){
            cout << i+1 << ". Enter item id: ";
            int checkId;
            cin >> checkId;

            for(int j = 0; j < size; j++){
                if(checkId == id[j]){
                    correctPrice[i] = price[j];
                    correctItem[i] = item[j];
                    itemFound = true;
                    break; // exit loop pag nahanapan na ung value para di na bumalik sa for loop
                }
            }

        }

        cout << "Enter number of quantity: ";
        cin >> quantity[i];
    }

    // Calculate SubTotal
    for(int i = 0; i < numItems; i++){
        subtotal[i] = quantity[i] * correctPrice[i];
    }

    cout << "\nSUMMARY OF PURCHASE" << endl;
    cout << "Item\t\t\t" << "Quantity\t\t" << "Price\t\t" << "Sub Total" << endl;

    for(int i = 0; i < numItems; i++){
        cout << correctItem[i] << "\t\t\t" << quantity[i] << "\t\t\t\t" << "$" << correctPrice[i] << "\t\t" << "$" << subtotal[i] << endl;
    }
    for(int i = 0; i < numItems; i++){
        total += subtotal[i];
    }
    cout << "GRAND TOTAL: $" << total << endl;
    

    cout << endl;
    return 0;
}
