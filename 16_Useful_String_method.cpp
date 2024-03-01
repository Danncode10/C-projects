#include <iostream>
using namespace std;
int main(){
    string name, name2;

    cout << "Enter Name: ";
    cin >> name;

    name.length() > 10 ? // Take Note of .length, it means how many characters does a string has
        cout << "Your name cant be over 10 characters. \n"
        :
        cout << "Welcome\n";

//Example2

    cout << "Enter Name 2: ";
    cin >> name2;

    name2.empty() ? // If you click enter (which doesnt work on my laptop). 
    //this means that no chaacters. Thus making it an empty. and display is
    //You did not enter a name
        cout << "You did not enter a name. "
        :
        cout << "Welcome " << name2 << endl;

//Example 3
    string name3;

    cout << "Enter Name 3: ";
    cin >> name3;

    name3.clear(); // This means that after input of name3, the value of name is empty.
    // So the result is only "Hello       "
    cout << "Hello \n" << name3;

//Example 4
    string name4;

    cout << "Enter Name 4: ";
    cin >> name4;

    name4.append("@gmail.com");
    //Pag Append, may idudugtong
    cout << "Your user name is now "<< name4 << endl;

//Example 5
    string name5;

    cout << "Enter Name 5: ";
    cin >> name5;

    name5.insert(0, "@");// This means I want to add, @ at the beginning (0) of name5
    cout << name5 << endl;
//Example 6
    string name6;

    cout << "Enter Name 6: ";
    cin >> name6;
    // Take note, pag .at, after siya ng cout
    cout << name6.at(0) <<endl; // This means that the first letter of the input name in name5 will be
    // displayed. example, Dann. The result is D. if at.1, the reult is 'a'

//Example 7
    string name7;

    cout << "Enter Name 7: ";
    cin >> name7;
    // take note ang .find ay pagkatapos din ng cout, parang .at
    cout << name7.find('D') << endl; // This means you are looking for what sequence is letter 'D' is,
    // Example input, Dann, The result is 0, 
//example 8
    string name8;

    cout << "Enter Name 8: ";
    cin >> name8;
    name8.erase(0,3); // This means delete 3 letters from the start (0)
    // For example, Dann, Result is 'n'
    cout << name8 << endl;

    return 0;
}
