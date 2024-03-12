#include <iostream>

int main(){
    /* Integers. Stores numbers*/
    int x; //This is a declaration. The code int x. declares a variable named x
    x=5; /*Now, we made a value of x (assignment). 
        Now to display the value of x, we'll use the command, 
        std::cout << (variable); 
        TAKE NOTE
         */

    int y=6; //You can also do it like this, instead of int y, then y=5
    int sum=x+y; //Declares the name "sum" with a value of x+y
    int age = 7.5;

    /*
    TAKE NOTE: Int only has a value of whole number, example;
    int age=7.5;
    std::cout << age;

    This results to...

    7

    */

   /* Double. If You want to include the decimal point, use the code (double)*/
   double price=10.99;

   /* Char. Stores a Single character,  use the code (char), so kung sumobra sa 1 digit ung nilagay mo, magkaka error
   example:
        char grade2= 'AB' 
        Error eto

        TAKE NOTE: Dapat may ''
   */
   char grade='A';

   /* boolean. It only has 2 states either (True or False). use the code (bool)*/
   bool student=false;
   bool power=true;

   /*String. It represents a sequence of text. Its like a char data type but instead of one character,
   You can put more than one*/
   std::string name="Dann"; /* Hindi ito display text dahil lang may std. yung name, ang variable. at ang Dann ay ang name*/
   std::string sentence="This is a sentence";

   /* This is where string is actually used. The sentence below. */
   std::cout <<"Hello " << name << "!" << '\n';


    std::cout << x << '\n';
    std:: cout << y << '\n';
    std:: cout << sum << '\n';
    std::cout << age << '\n';
    std::cout << price << '\n';
    std::cout << grade << '\n';
    std::cout << name << '\n';
    std::cout << sentence << '\n';

    return 0;
}