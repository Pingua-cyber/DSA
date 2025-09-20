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

    if (a == 0 && b == 0) {
        std::cout << "LCM: 0" << std::endl;
        return 0;
    }
    int g = gcd(a, b);
    long long lcm = (long long)(a / g) * b;
    if (lcm < 0) lcm = -lcm;
    std::cout << "LCM: " << lcm << std::endl;
    return 0;
}


