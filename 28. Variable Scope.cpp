#include <iostream>
using namespace std;

int myNum = 3;
void printNum(int myNum){
	cout << myNum;
}
void printNum2(){//Take Note 1. Error pag, void printNum2(int myNum). Kase ung myNum sa main, ay hindi naten kailangan kase magkaiba ang avlue ng myum sa ibang function
	int myNum = 2;
	cout << myNum;
}

int main(){
	
	//Local Variable = declared inside a function or block {}
	//Global Variable = declared outside of all function
	
	//Example for local Variables
	cout << "Example 1: myNum = 1, located at  main function\n";
	int myNum = 1; // myNum is a local variable in the main function
	printNum(myNum);
		cout << "\n\n";
	
	cout << "Example 2: myNum = 2, located at void printNum2()\n";
	printNum2();
		cout << "\n\n";
	
	//Example for Global variable
	cout <<"Example 3: myNum = 3 is outside of all functions (Global Variable). This will only work if you delete the value of myNum in main. "
	<< "But try to delete myNum to see the difference or make it a comment. If not, then the expected value is 1. if deleted, it is 3. "
	<< "But example 2, which is located at a function, not in the main will still display 2\n";
	cout << myNum <<"\n\n";
	//This will only work if you delete the value of myNum in main
	
	cout << "Example 4: There is a code that makes the value of a variable into a global version. and that is (::)\n";
	cout << ::myNum;
	
	//It is suggested to not use global variable because it polutes other variable
	
	return 0;
}



















