#include <iostream>
using namespace std;

int main(){
    int price[8] = {900,200,630,85,400,950,1000,85};
    
    price[3] = price[3] + 15;
    
    cout << price[3] << endl;
    
    return 0;
}
