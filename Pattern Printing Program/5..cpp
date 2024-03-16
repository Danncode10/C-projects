#include <iostream>
using namespace std;

int main(){
	int n = 5;
	for(int i = n;i >= 1;i--){
		for(int k = n-1; k >= 1; k--){
			cout << " ";
		}
		for(int j = i; j >= 1; j--){
			cout << "*";
		}
		cout << endl;
	}
	
	cin.get();
	return 0;
}
