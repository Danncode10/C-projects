#include <iostream>
using namespace std;

int main(){
	int n = 10;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j<=i*2;j++){
			cout << " ";
		}
		for(int j = 1; j<=1;j++){
			cout << "*";
		}
		cout << endl;
	}
}
