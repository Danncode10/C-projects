#include <iostream>
using namespace std;

int main(){
	const int size=12;
	string foods[size];
	
	fill(foods, foods+(size/3), "Pizza");
	fill(foods+(size/3), foods+(size/3)*2, "Shawarma");
	fill(foods+(size/3)*2, foods+size, "Hotdog");
	
	for(string food : foods){
		cout << food << endl;
	}
	
	return 0;
}
