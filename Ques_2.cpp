#include <iostream>

int main() {
    double radius;
    const double PI = 3.14159;

    std::cout << "Enter radius: ";
    std::cin >> radius;

    double circumference = 2 * PI * radius;
    std::cout << "Circumference: " << circumference << std::endl;

    return 0;
}


