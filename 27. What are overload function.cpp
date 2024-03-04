#include <iostream>
using namespace std;
//Function
void bakePizza(){
	cout << "Here is your pizza\n";
}
void example1(int num){// You can Put Arguments inside a function
	if(num==1){
		cout << "It is 1";
	}
	else{
		cout << "It is not 1";
	}
}
void bakePizza(string toping1){
	cout << "Your order is pizza with " << toping1;
}
void bakePizza1(string toping1){
	cout << "Your order is pizza with " << toping1;
}
void bakePizza2(string toping1, string toping2){
	cout << "Your order is pizza with " << toping1<<" ," << toping2;
}
void bakePizza3(string toping1, string toping2, string toping3){
	cout << "Your order is pizza with " << toping1<<" ," << toping2 <<" ,"<<toping3;
}

	


int main(){
	
	/* Example 1
	int x;
	cout << "Enter Number";
	cin >> x;
	
	example1(x);*/
	
	string topings, toping1, toping2, toping3;
	int topnum;
	
	cout << "How many toppings would you like? ";
	cin >> topnum;
	
	int x = topnum;
	
	if(x==1){
		cout << "What is your Topping 1: ";
		cin >> toping1;
			bakePizza1(toping1);
	}
	else if(x==2){
		cout << "What is your Topping 1: ";
		cin >> toping1;
		cout << "What is your Topping 2: ";
		cin >> toping2;
			bakePizza2(toping1, toping2);
	}
	else if(x==3){
		cout << "What is your Topping 1: ";
		cin >> toping1;
		cout << "What is your Topping 2: ";
		cin >> toping2;
		cout << "What is your Topping 3: ";
		cin >> toping3;
			bakePizza3(toping1, toping2, toping3);
	}
	else{
		cout << "Enter values (1-3)";
	}

	
	//bakePizza(topings); //Take note, Hinndi gagana ang [cout << bakePizza()]
	
	
	return 0;
}
