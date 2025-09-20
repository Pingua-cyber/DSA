#include <iostream>

int main() {
    long long n;
    std::cout << "Enter number: ";
    std::cin >> n;

    bool neg = n < 0;
    if (neg) n = -n;

    long long rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    if (neg) rev = -rev;
    std::cout << "Reversed: " << rev << std::endl;
    return 0;
}


