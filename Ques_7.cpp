#include <iostream>

int main() {
    int code;
    std::cout << "Enter ASCII code (0-127): ";
    std::cin >> code;
    char ch = (char)code;
    std::cout << "Character: " << ch << std::endl;
    return 0;
}


