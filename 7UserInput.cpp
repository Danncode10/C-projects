#include <iostream>

// Using the 'cout' and 'cin' objects for output and input

int main() {

    std::string name;
    int age;
    
    // Prompt the user for their name
    std::cout << "What is Your name?" << '\n';
    
    // Read the user's name from input
    std::getline(std::cin, name);

    // Prompt the user for their age
    std::cout << "How old are you?";
    
    // Read the user's age from input
    std::cin >> age;

    // Display a personalized message
    std::cout << "Hello " << name << ". You are " << age << " years old";

    return 0;
}