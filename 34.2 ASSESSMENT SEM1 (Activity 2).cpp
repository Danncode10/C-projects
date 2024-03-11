/*
1. Ask the user to enter a string.
2. Display the length of the string.
3. Check if the string is empty and display the result.
4. Clear the string and display the cleared string.
5. Append a word to the end of the string and display the modified string.
6. Insert a character at a specific position and display the modified string.
7. Use the at() method to display the character at a specific position (e.g., position 0).
8. Use the find() method to find the position of a specific character (e.g., 'D').
9. Erase a substring from the string and display the modified string.

EXAMPLE:
								Enter a string: Hello

								Results:
								Length of the string: 5
								Is empty: false
								Cleared string: 
								Appended word: Hello World
								Inserted '@' at position 0: @Hello World
								Character at position 0: @
								Position of 'D': 7
								Erased substring (0,3): lo World
								Modified string: @He

*/
#include <iostream>
using namespace std;

int main(){
	string word;
	
	cout << "Enter a string: ";
	getline(cin, word);
	cout << "\nResults:";
	cout << "Length of the string: " << word.length() <<endl;
	cout << "Is empty: " << (word.empty() ? "true" : "false")<< endl;
	string erased = word;
	erased.clear();
	cout << "Cleared string: " << erased << endl;
	cout << "Appended word: " << word.append(" World") <<endl;
	cout << "Inserted '@' at position 0: " << word.insert(0, "@") <<endl;
	cout << "Character at position 0: "<< word.at(0) << endl;
	cout << "Position of 'd': " << word.find("d") << endl;
	cout << "Erased substring (0,3): " << word.erase(0,3) << endl;
 	
	cin.get();
	return 0;
}

//SCORE: 90/100






















