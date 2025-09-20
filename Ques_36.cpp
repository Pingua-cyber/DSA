#include <iostream>

int gcd(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    if (gcd(a, b) == 1) std::cout << "Co-prime" << std::endl;
    else std::cout << "Not co-prime" << std::endl;
    return 0;
}


