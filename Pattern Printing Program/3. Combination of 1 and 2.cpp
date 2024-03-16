#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void random(){
	srand(time(0));
}

int main(){
	int num;
	int sym;
	//cout << "Enter Size: ";
	//cin >> num;
	
	int loop = 0;
	num =30;
	do{
		for(int i=1; i<=num; i++){
			for(int j=1; j<=i; j++){
				sym = rand() % 2;
				cout << sym;
			}
			cout << endl;
		}
		for(int i = num-1; i>=1;i--){
			for(int j = i; j>=1;j--){
				sym = rand() % 2;
				cout << sym;
			}
			cout << endl;
		}
		
	}while(loop<=1000);
	cin.get();
	return 0;
}
