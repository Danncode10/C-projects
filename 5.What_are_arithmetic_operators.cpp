#include <iostream>

int main(){
    int students=20;
    students=students+1; /*can be written also as 
    students+=1;
    students++; ------------------------This only works if you only want to add 1
    */
   int subtract=20;
   subtract=subtract-1; /*
   subtract-=1
   subtract--
   */

   int multiply=20;
   multiply=multiply*2;/*
   multiply*=2;
   */

   int divide=20;
   divide=divide/2;/*
   divide/=2;
   */

  //What if the answer is not whole number

  int div=20;
  div=div/3;

  double divi=20;
  divi=divi/3;
//if you want remainder use this key (%). TAKE note ung student dito ay may value na 20, 
  //at yung 3 na i divide, un ung kanina kase nga decimal ung bigay pero gusto naten na remainder
 
  int rem = 20;
  rem = 20/3;
  int remainder = rem % 3;
  int sequence=6-5+4*3/2;
  int seq=6-(5+4)*3/2;

    std::cout << students << '\n';
    std::cout << subtract << '\n';
    std::cout << multiply << '\n';
    std::cout << divide << '\n';
    std::cout << div << '\n';
    std::cout << divi << '\n';
    std::cout << rem << "r " << remainder << '\n';
    std::cout << sequence << '\n';
    std::cout << seq << '\n';


    return 0;
}