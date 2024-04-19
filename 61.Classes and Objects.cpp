#include <iostream>
using namespace std;

class human{
public:
    //gives attributes of a human
    string name;
    string occupation;
    int age = 69;
    
    //gives action that a human can do
    // functions inside a class is called method
    void eat(){
        cout << name <<" is eating\n";
    }
    void drink(){
        cout << "This Person is drinking\n";
    }
    void sleep(){
        cout << "This Person is sleeping\n";
    }
};

int main(){
    
    human human1;
    
//    human1.name = "Rick";
//    human1.occupation = "Scientist";
//    human1.age = 70;
//    
//    cout << human1.name << "\t" << human1.occupation << "\t" << human1.age;
    
    human1.name = "Lester";
    
    human1.eat();
    human1.drink();
    human1.sleep();
    
    
    
    
    cout << "\n\n\n";
}
