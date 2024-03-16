#include <iostream>
using namespace std;


int main(){
	
	
	int n = 10;
	string sym = "*";
	string b = " ";
	int x = 0;
	do{
	for(int i = 1; i <= n; i++){
		for(int j = i; j <= n; j++){
			cout << b;
		}
		for(int j = 1; j <= i; j++){
			cout << sym;
		}
		for(int j = 1; j <= i-1; j++){
			cout << sym;
		}
		cout << endl;
	}

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cout << b;
		}
		for(int j = i; j <= n; j++){
			cout << sym;
		}
		for(int j = i; j <= n-1; j++){
			cout << sym;
		}
		cout << endl;
	}
	x++;
}while(x == 69);
	return 0;
}
