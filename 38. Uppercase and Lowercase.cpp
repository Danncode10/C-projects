#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string word, word2;
	cout << "Enter a Word to Convert: ";
	getline(cin, word);
	
	transform(word.begin(), word.end(), word.begin(), ::tolower);
	cout << word << "\n\n";
	
	cout << "Enter a Word to Convert: ";
	getline(cin, word2);
	
	transform(word2.begin(), word2.end(), word2.begin(), ::toupper);
	cout << word2;
	
	cin.get();
	return 0;
}

