#include <iostream>
using namespace std;
	//Exercise. Make a function that converts an inch to cm
//<function>
	float convert1(double num){
		return num/2.54;// cm to in
	}
	float convert2(double num){
		return num*2.54;//in to cm
	}
	float convert3(double num){
		return num*30.48;//ft to cm
	}
	float convert4(double num){
		return num/30.48;//cm to ft
	}
	float convert5(double num){
		double ft=num/30.48;//cm to ft
		return ft;
	}
		float convert5_1(double wholeDeci, int whole){
			double deci=wholeDeci-whole;
		return deci / 2.54;//cm to in
		}
//</function>
int main(){
	
	double number;
	int con; //con for convertion
	
		cout << "[1]: cm to inch\n"
				<<"[2]: inch to cm\n"
				<<"[3]: ft to cm\n"
				<<"[4]: cm to ft\n"
				<<"[5]: cm to ft'in\n"
				<<"[0]: End the Program\n\n";

		
	do{
		cout << "Enter Your Choice: ";
		cin >> con;
		
		if(con==2){
			cout << "How many inch: ";
			cin >> number;
			cout << convert2(number) << "cm" <<endl;
		}
		else if(con==1){
			cout << "How many cm: ";
			cin >> number;
			cout << convert1(number) << "in" <<endl;
		}
		else if(con==3){
			cout << "How many ft: ";
			cin >> number;
			cout << convert3(number) << "cm" <<endl;
		}
		else if(con==4){
			cout << "How many cm: ";
			cin >> number;
			cout << convert4(number) << "ft" <<endl;
		}
		else if(con==5){
			cout << "How many cm: ";
			cin >> number;
			double ft = convert5(number); // Puts the computed value in main
			int feet=ft;
			cout << feet << " ft " << convert5_1(ft, feet) << " in " <<endl;
		}
		else if(con==0){
			cout << "Program is Terminated..." <<endl;
			return 1;
		}
		else if(con!=0){
            cout << "Enter [0,1,2]" <<endl;
        }
	}while(con!=0);
	
	
	return 0;
}
















