#include <iostream>
using namespace std;

double getArea(){
    double value;
    cout << "Enter the area of a cylinder: ";
    cin >> value;
    
    return value;
}

double getLength(){
    double value;
    cout << "Enter the length of a cylinder: ";
    cin >> value;
    
    return value;
}

double calculateVolume(double area, double length){
    return area*length;
}

void displayVolume(double volume){
    cout << "The volume is " << volume;
}

int main(){
    
    double area = getArea();
    double length = getLength();
    
    double volume = calculateVolume(area, length);
    displayVolume(volume);
    
    //-------------------------//
    cout << endl;
    return 0;
}
