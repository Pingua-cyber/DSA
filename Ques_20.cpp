#include <iostream>

int main() {
    int a, b, c, d;
    std::cout << "Enter four numbers: ";
    std::cin >> a >> b >> c >> d;

    int largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;
    if (d > largest) largest = d;

    std::cout << "Largest: " << largest << std::endl;
    return 0;
}


