#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string> //we use this to convert int to string using the 'to_string' function
#include <cmath>

//number is 16 character long

using namespace std;

int even(int evenNum[]) {
    int newEven[8];
    int sum = 0;

    for (int i = 0; i < 8; i++) {
        newEven[i] = evenNum[i] * 2;
        if (newEven[i] >= 10) {
            // Split the digits and add them
            sum += (newEven[i] % 10) + (newEven[i] / 10);
        } else {
            sum += newEven[i];
        }
    }
    
    return sum;
}

int odd(int oddNum[]){
    int sumodd = 0;
    
    for(int i = 0; i < 7; i++){
        sumodd += oddNum[i];
    }
    return sumodd;
}

int give_last_element_to_be_valid(int odd, int even){
    int upper = (odd+even) % 10; //example sum = 72, 72 % 10 = 2,
    int seventh_element = 10 - upper;
    if(seventh_element == 10){
        seventh_element = 0;
    }
    return seventh_element;
}




int main(){
    srand(static_cast<unsigned int>(time(0)));

    int evenNum[8];
    int oddNum[8];

//EVEN NUMBERs
    
    for(int i = 0; i < 8; i++){
        evenNum[i] = rand() % 9;
        cout << evenNum[i]; // Shows Even Numbers
    }
    cout << endl;
    
    int sum_of_even = even(evenNum);
    cout << sum_of_even << endl;

//ODD NUMBERs
    
    for(int i = 0; i < 7; i++){ //-------------> Ginawa kong blang yung oddNum[7] kase i momodify naten to mamaya para mag sum_of_all == %10
        oddNum[i] = rand() % 9;
        cout << oddNum[i]; // Shows odd Numbers
    }
    cout << endl;
    
    int sum_of_odd = odd(oddNum);
    cout << sum_of_odd;
    
    cout << "\n\nSum of Both without the last array of odd: " << sum_of_odd + sum_of_even << endl;
    
    oddNum[7] = give_last_element_to_be_valid(sum_of_odd, sum_of_even);
    
    cout << "\nOddnum[7]: " << oddNum[7];
    
    //I made an array to combine odd and even
    int validNum[16];
    
    for(int i = 0; i < 16; i++){
        if(i % 2 == 0){
            validNum[i] = oddNum[i/2];
        }
        else{
            validNum[i] = evenNum[i/2];
        }
    }
    
    //show the valid num
    
    cout << "\nThis is a Valid Number: ";
    for(int i = 0; i < 16; i++){
        cout << validNum[i];
    }
    
    cout << endl;
    cin.get();
    return 0;
}
