#include <iostream>

int main() {
    char c1, c2, c3;
    std::cout << "Enter three characters: ";
    std::cin >> c1 >> c2 >> c3;

    std::cout << c1 << " -> " << (int)c1 << std::endl;
    std::cout << c2 << " -> " << (int)c2 << std::endl;
    std::cout << c3 << " -> " << (int)c3 << std::endl;

    return 0;
}


