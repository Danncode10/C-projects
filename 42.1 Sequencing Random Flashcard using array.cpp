#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main(){
    
    srand(static_cast<unsigned int>(time(0)));
    int num = rand() % 10 + 1;
    
    for(int i = 0; i < 40; i++){
        cout << num << endl;
    }
    
    return 0;
}
