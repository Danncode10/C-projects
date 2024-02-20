#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x = 3;
    double y = 4; 
    double z;
    double a;
    double b;
    double c;
    double d;
    double e;
    double f;
    double g;
    double r = 3.14;
    double rr= 3.99;

    z = std::max(x, y);
    a = std::min(x, y);
    b = pow(2,4); //pow key, will not work without #include <cmath>. This means 2 to the power of 4.
    c = sqrt(9); // means square root of 9
    d = abs(-3); //means absolute value of -3
    e = round(r); //means round of r=3.14 -------> 3
    f =ceil(r); //means round up
    g = floor(rr); //means round down

    //for more cmath codes, see https://www.cplusplus.com/reference/cmath/
     


    cout << z << '\n';
    cout << a << '\n';
    cout << b << '\n';
    cout << c << '\n';
    cout << d << '\n';
    cout << e << '\n';
    cout << f << '\n';
    cout << g << '\n';


    return 0;
}
