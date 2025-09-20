#include <iostream>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; 1LL * i * i <= n; i++) if (n % i == 0) return false;
    return true;
}

int main() {
    for (int n = 2; n < 100; n++) {
        if (isPrime(n)) {
            std::cout << n;
            if (n < 97) std::cout << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}


