//26. Exercise no.1
// Make a c++ code that inputs information using functions

#include <iostream>
using namespace std;
//functions
	string fullname(string first, string last){
		system("color f5"); // This changes the color 0-9 for background and a-f for text color 
		return first + " " + last;
	}
	

int main(){
	system("color 1f");
	string fname, lname;
	
	cout << "Enter Your First Name: ";
	getline(cin, fname);
	
	cout << "Enter Your Last Name: ";
	getline(cin, lname);
	
	cout << "Your name is " << fullname(fname, lname) <<endl;
	
	
	return 0;
}
