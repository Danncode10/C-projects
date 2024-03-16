#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
/*
void initialize_Random(){
	srand(time(0));
}
*/

int main(){
	int size;
	int sym;
	
	//cout << "Enter Size: ";
	//cin >> size;
	size = 120;
	//        i=2      5
	for(int i=1; i<=size; i++){
	//			j=2		i=2
		for(int j=1; j<=i; j++){
			sym = rand() % 9;
			cout << sym;
		}
		cout << endl;
	}
	
	
	
cin.get();
}
