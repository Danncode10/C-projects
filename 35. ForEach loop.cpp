#include <iostream>
using namespace std;

int main(){
	//Example on last lesson, iterate this array
	string students[] = {"Spongebob", "Patrick", "Squidward"};
	
	for(int i = 0; i < sizeof(students)/sizeof(string); i++){
		cout << students[i] <<endl;
	}
	
	cout << "\n\nUsing Foreach loop, saves time and less code. \n";
	
	for(string student : students){
		cout << student << endl;
		//Yung syntax parang same sa python na, for x in y:...
	}
	
	return 0;
}
