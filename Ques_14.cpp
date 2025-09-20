#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter two integers (a b): ";
    std::cin >> a >> b;

    if (b == 0) {
        std::cout << "Division by zero not allowed" << std::endl;
    } else if (a % b == 0) {
        std::cout << "Divisible" << std::endl;
    } else {
        std::cout << "Not divisible" << std::endl;
    }
    return 0;
}


