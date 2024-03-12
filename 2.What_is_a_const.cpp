#include <iostream>

int main(){
     
    /*
    The const keywordspecifies that a variable is constant 
    tells the compiler to prevent anything from modifying it
    

   double pi = 3.14159;
   double radius = 10;
   double circumference = 2 * pi * radius;
    */

   //Pi value cannot be changed because it is a constant thus, use this instead. Make sure to add the const
   const double Pi = 3.14159;
   double radius = 11;
   double circumference = 2 * Pi * radius;

   /* now that you place a const, the value of pi cannot be changed. Now, lets see for more examples. */

   const int width=1920;
   const int height=1080;

   std::cout << circumference << " cm" << '\n';
   

    return 0;
}