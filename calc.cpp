#include <iostream>

int main() {
    int input{};

    std::cout << "Enter an integer: ";

    std::cin >> input;

    std::cout << "Double that number: " << input * 2 << std::endl;

    return 0;
}