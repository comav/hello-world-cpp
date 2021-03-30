#include <iostream>

int main() {
    int num1{};
    int num2{};

    std::cout << "Enter an integer: " << "\n";
    std::cin >> num1;

    std::cout << "Enter one more integer: " << "\n";
    std::cin >> num2;

    std::cout << num1 << " + " << num2 << " is " << num1 + num2 << "\n";
    std::cout << num1 << " - " << num2 << " is " << num1 - num2 << "\n";

    return 0;
}