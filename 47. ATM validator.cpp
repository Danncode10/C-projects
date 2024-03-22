#include <iostream>
using namespace std;

int main(){
    string word;
    
    cout << "Enter Word to reverse: ";
    cin >> word;
    for (int i = 0; i < word.size(); i++) {
        cout << word[i];
    }
    
    for (int i = 0; i < word.size(); i+=2) {
        cout << word[i];
    }
    
    for(int i = word.size() - 2; i >= 0;i--){
        cout << word[i];
    }
}
