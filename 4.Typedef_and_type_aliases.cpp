#include <iostream>
#include <vector>


typedef std::string text_t;
typedef int number_t;

/*
USING KEY

using text_t=std::string;
using number_t=int;

SAME LANG DIN SA NAUNA

SANAYIN NA 'USING' ANG GAMITIN INSTEAD NA TYPEDEF. 

*/

int main(){

    text_t name="Dann"; //Take note, naalala ko lang, bawal mag lagay ng '\n' sa string 
    number_t age=18;

    std::cout<< name << '\n';
    std::cout<< age << '\n';

    return 0;
}