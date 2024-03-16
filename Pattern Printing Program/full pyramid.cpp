#include <iostream>
using namespace std;

int main(){
	int n = 10;
	for(int i = 1; i <= n; i++){
		for(int j = i; j <=n; j++){
			cout << " ";
		}
		for(int j = 1; j <= i; j++){
			cout << "*";
		}
		for(int j=1; j<=i; j++){
			cout << "*";
		}
		cout << endl;
	}
}
