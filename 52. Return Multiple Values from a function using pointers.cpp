#include <iostream>
using namespace std;

int getMin(int num[], int size){
    int min = num[0];
    
    for(int i = 1; i < size; i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    return min;
}

int getMax(int num[], int size){
    int max = num[0];
    
    for(int i = 1; i < size; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    return max;
}

//Use of pointer

void getMin_Max(int num[], int size, int* min, int* max){
    for(int i = 1; i < size; i++){
        
        if(num[i] < *min){
            *min = num[i];
        }
        
        if(num[i] > *max){
            *max = num[i];
        }
    }
}
 
int main(){
    int num[] = {4, -2, 29, 3, 2};
    int size = sizeof(num) / sizeof(num[0]); // Calculate the size of the array
    
//    cout << "Minimum: " << getMin(num, size) << endl;
//    cout << "Maximum: " << getMax(num, size) << endl;
    
    // This is default
    int min = num[0];
    int max = num[0];
    
    getMin_Max(num, 5, &min, &max);
    
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    
    cin.get();
    return 0;
}

