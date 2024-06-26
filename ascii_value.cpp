#include <iostream>

int main() {
    char ch;

    // Input character from the user
    std::cout << "Enter a character: ";
    std::cin >> ch;

    // Check if the character is an uppercase letter
    if (ch >= 'A' && ch <= 'Z') {
        std::cout << "The character is an uppercase letter." << std::endl;
    }
    // Check if the character is a lowercase letter
    else if (ch >= 'a' && ch <= 'z') {
        std::cout << "The character is a lowercase letter." << std::endl;
    }
    // Check if the character is a digit (number)
    else if (ch >= '0' && ch <= '9') {
        std::cout << "The character is a number." << std::endl;
    }
    // If it's not a letter or a number, consider it a special character
    else {
        std::cout << "The character is a special character." << std::endl;
    }

    return 0;
}
