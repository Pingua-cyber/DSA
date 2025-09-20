#include <iostream>

int main() {
    char type;
    std::cout << "Enter C for Celsius->Fahrenheit or F for Fahrenheit->Celsius: ";
    std::cin >> type;

    if (type == 'C' || type == 'c') {
        double c;
        std::cout << "Enter Celsius: ";
        std::cin >> c;
        double f = (c * 9.0 / 5.0) + 32;
        std::cout << "Fahrenheit: " << f << std::endl;
    } else if (type == 'F' || type == 'f') {
        double f;
        std::cout << "Enter Fahrenheit: ";
        std::cin >> f;
        double c = (f - 32) * 5.0 / 9.0;
        std::cout << "Celsius: " << c << std::endl;
    } else {
        std::cout << "Invalid choice" << std::endl;
    }
    return 0;
}


