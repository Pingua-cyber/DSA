#include <iostream>

int main() {
    double length, width, height;
    std::cout << "Enter length: ";
    std::cin >> length;
    std::cout << "Enter width: ";
    std::cin >> width;
    std::cout << "Enter height: ";
    std::cin >> height;

    double volume = length * width * height;
    std::cout << "Volume: " << volume << std::endl;
    return 0;
}


