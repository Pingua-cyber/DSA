#include <iostream>

int main() {
    int a, b, c;
    std::cout << "Enter three integers: ";
    std::cin >> a >> b >> c;

    double average = (a + b + c) / 3.0;
    std::cout << "Average: " << average << std::endl;

    return 0;
}
