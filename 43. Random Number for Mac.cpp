
#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main(){
    
    srand(static_cast<unsigned int>(time(0)));
    int num = rand() % 10 + 1;
    
    cout << "This is a random Number from (1-10): " << endl;
    for(int i = 0; i < 10; i++){
        num = rand() % 10 + 1;
        cout << num << endl;
    }
    cout << endl;

    
    
    return 0;
}
