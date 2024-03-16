#include <windows.h>
#include <iostream>
using namespace std;

int main(){

	int one = 1;
	int x = 8;
	for(int i = 1; i <=6; i++){
		for(int j = 1; j <=60; j++){
			cout << one;
		}
		cout << endl;
	}
	
	for(int i = 1; i <=2; i++){
		for(int j = 1; j <=12; j++){
			cout << one;
		}
		for(int j = 1; j <=i; j++){
			cout << one;
		}
		for(int j = 1; j <= 11; j++){
			cout << x;
		}
		for(int j = 1; j <= 14; j++){
			cout << one;
		}
	
		
		cout << endl;
	}
	
	
	cin.get();
	return 0;
}
