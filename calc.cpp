#include <iostream>
#include <string>

void greetUser() {
    std::cout << "What is your name?" << "\n";

    std::string username;

    std::cin >> username;

    std::cout << "Hello, " << username << "!\n";
}

void plusMinus() {
    int num1{};
    int num2{};

    std::cout << "Enter an integer: " << "\n";
    std::cin >> num1;

    std::cout << "Enter one more integer: " << "\n";
    std::cin >> num2;

    std::cout << num1 << " + " << num2 << " is " << num1 + num2 << "\n";
    std::cout << num1 << " - " << num2 << " is " << num1 - num2 << "\n";
}

int main() {
    std::cout << "What to run? \n 1. Greet user \n 2. Add-distract \n Please type your answer and hit enter \n";

    short userChoice{};

    std::cin >> userChoice;

    if (userChoice == 1) {
        greetUser();
    } if (userChoice == 2) {
        plusMinus();
    }
}