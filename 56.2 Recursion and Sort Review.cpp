#include <iostream>
using namespace std;

void enterValues(int num[], int size){
    for(int i = 0; i < size; i++){
        cout << "Enter Value " << i+1 << ": ";
        cin >> num[i];
    }
}

//void sort(int num[], int size){
//    int temp;
//    for(int i = 0; i < size - i; i++){
//        for(int j = 0; j < size - i - 1; i++){
//            if(num[j] > num[j+1]){
//                temp = num[j];
//                num[j] = num[j+1];
//                num[j+1] = temp;
//            }
//        }
//    }
//}

void sort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void sort2(int array[], int size){
    for (int i = 0; i < size - 1; i++) {
        
    }
}

int main (){
    
    //blank array
    int num[10];
    // 0,9,4,2,1,5,6,7,8,3
    
    enterValues(num, 10);
    sort(num, 10);
    
    for(int i = 0; i < 10; i++){
        cout << num[i] << " ";
    }
    
    cout << endl;
    return 0;
}
