//Diamond
#include <iostream>
#include <ctime>
#include <cstdlib>

void random(){
	srand(time(0));
}

#define rec int j = 1; j<=n; j++
#define sq int j = 1; j<=n*2; j++
#define up int j = 1; j<=i; j++
#define down int j = i; j<=n; j++
using namespace std;
int main(){
	int n;
	string b = " ";
	int sym;
	
	random();
	
	//cout << "Enter Size: ";
	//cin >> n;
	n = 20;
	int x;
do{
	//Tower flag
	for(int i = 1; i<=n/2;i++){
		for(int j = 1; j<=n; j++){
			cout << b;
		}
		for(int j = 2; j<=n*2;j++){
			sym = rand() & 1;
			cout << sym;
		}
		cout << endl;
	}
	for(int i = 1; i <= n/2; i++){
		for(int j = 1; j<=n; j++){
			cout << b;
		}
		for(int j = 1; j<=n/10;j++){
			sym = rand() & 1;
			cout << sym;
		}
		cout << endl;
	}
		
	
	for(int i = 1; i<=n; i++){
		for(down){
			cout << b;
		}
		for(up){
			sym = rand() % 1;
			cout << sym;
		}
		for(int j = 2; j<=i; j++){	//sa next side, lagay lang ng j = 2, instead na 1
			sym = rand() & 1;
			cout << sym;
		}
		cout << endl; 
	}
	
	//Square
	for(int i = 1; i <= n; i++){
		for(sq){
			sym = rand() & 1;
			cout << sym;
		}
		cout << endl;
}
	}while(x <= 69);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
