#include <iostream>

int main() {
    int a, b, c;
    std::cout << "Enter three sides: ";
    std::cin >> a >> b >> c;

    if (a == b && b == c) {
        std::cout << "Equilateral" << std::endl;
    } else if (a == b || b == c || a == c) {
        std::cout << "Isosceles" << std::endl;
    } else {
        std::cout << "Scalene" << std::endl;
    }
    return 0;
}


