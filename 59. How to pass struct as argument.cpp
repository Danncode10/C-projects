#include <iostream>
using namespace std;

struct Car{
    string name;
    int model;
    string color;
};

void printCar(Car &car){ //Use address operator para ndi ma duplicate
    cout << car.name << endl;
    cout << car.model << endl;
    cout << car.color << endl;
}

void paint(Car &car, string color){
    car.color = color;
}

int main(){
    
    Car car1;
    car1.name = "Mustang";
    car1.model = 1997;
    car1.color = "black";
    
    paint(car1, "white");
    
    Car car2;
    car2.name = "Pagani";
    car2.model = 2020;
    car2.color = "blue";
    
    printCar(car1);
    cout << endl;
    printCar(car2);
    
    cout << endl;
    return 0;
}
