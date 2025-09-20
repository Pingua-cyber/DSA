#include <iostream>

int main() {
    int n;
    std::cout << "Enter number: ";
    std::cin >> n;

    int original = n;
    if (n < 0) n = -n; // consider magnitude
    int sum = 0;
    while (n > 0) {
        int d = n % 10;
        sum += d * d * d;
        n /= 10;
    }
    if (sum == (original < 0 ? -original : original)) std::cout << "Armstrong" << std::endl;
    else std::cout << "Not Armstrong" << std::endl;
    return 0;
}


