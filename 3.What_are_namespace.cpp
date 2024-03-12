#include <iostream>

    namespace first{
        int x=1;
    }

    namespace second{
        int x=2;
    }

int main(){

    int x=0;

    std::cout<< x << '\n';
    std::cout<< first::x << '\n';
    std::cout<< second::x << '\n';

    /* There is also this key (using namespace first;)

    namespace first{
        int x=1;
    }

    namespace second{
        int x=2;
    }

int main(){

    using namespace first;

    std::cout<< x << '\n';

    The result is ---------------------------------------------------------
    1

    */



    return 0;
}