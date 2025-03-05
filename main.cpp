#include <iostream>

    //cout << (insertion operator)
    //cin >> (extraction operator)
int main() {

    std::string name;
    int age;

    std::cout << "Whats your full name?: ";
    std::getline(std::cin >> std::ws, name); // will accept white space
    //cin followed by getline() the \n is accepted into the buffer and will cause issues if we swapped the two quesiions
    // to stop from happening, we use std::ws

    std::cout << "Whats your age?: ";
    std::cin >> age;

    std::cout  << "Hello, " << name << '\n';
    std::cout <<  "You are " << age << " years old";


    return 0;
}