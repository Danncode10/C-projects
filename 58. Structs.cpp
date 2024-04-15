#include <iostream>
using namespace std;

struct student{
    string name;
    double grade;
    bool enrolled = true; // You can set default value
};

int main(){
    //student becomes  a datatype
    
    student student1;
    student1.name = "Dann";
    student1.grade = 3.2;
//    student1.enrolled = true;
    
    cout << student1.name << "\t" << student1.grade << "\t" << student1.enrolled << endl;
    
    student student2;
    student2.name = "Lester";
    student2.grade = 2.1;
    student2.enrolled = false;
    
    cout << student2.name << "\t" << student2.grade << "\t" << student2.enrolled << endl;
    
    cout << endl;
    return 0;
}
