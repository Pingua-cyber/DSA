#include <iostream>

int main() {
    long long n;
    std::cout << "Enter number: ";
    std::cin >> n;

    if (n < 0) { std::cout << "No" << std::endl; return 0; }

    long long a = 0, b = 1;
    while (a < n) {
        long long c = a + b;
        a = b;
        b = c;
    }
    if (a == n) std::cout << "Yes" << std::endl;
    else std::cout << "No" << std::endl;
    return 0;
}


