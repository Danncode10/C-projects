//Lesson 25- How to create user defined functions
#include <iostream>
using namespace std;

void bday(string name, int age);

int main(){
	string name="Dann";
	int age=18;
	
	bday(name, age);
	bday(name, age);
	
	//You can repeat a function
	
	return 0;
}

void bday(string name, int age){
	cout << "Happy birthday " <<name <<endl;
	cout << "Happy birthday " <<name <<endl;
	cout << "Happy birthday dear " <<name <<" " <<endl;
	cout << "Happy birthday " <<name <<endl <<endl;
	cout << name << " is now " <<age << " years old" <<endl<<endl;
}
