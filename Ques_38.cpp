#include <iostream>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; 1LL * i * i <= n; i++) if (n % i == 0) return false;
    return true;
}

int main() {
    int a, b;
    std::cout << "Enter two numbers (start end): ";
    std::cin >> a >> b;
    if (a > b) { int t = a; a = b; b = t; }
    bool first = true;
    for (int n = a; n <= b; n++) {
        if (isPrime(n)) {
            if (!first) std::cout << " ";
            std::cout << n;
            first = false;
        }
    }
    std::cout << std::endl;
    return 0;
}


