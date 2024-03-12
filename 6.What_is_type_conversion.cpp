#include <iostream>

int main() {
    // Example of implicit type casting
    int x = 3.14;
    double y = 3.14;

    // Example of character assignment
    char z = 100;

    // Example of corrected division
    //int correct = 8;
    //int question = 10;
    //double score = (correct / question) * 100;
    //The result is 0 % instead of 80
    //To fix that, 

    int correct = 8;
    int question = 10;
    double score = (correct / (double) question) * 100;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << z << '\n';
    std::cout << score << " %" << '\n';

    return 0;
}
