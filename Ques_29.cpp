#include <iostream>

int main() {
    int n;
    std::cout << "Enter number: ";
    std::cin >> n;

    if (n <= 1) {
        std::cout << "Not Prime" << std::endl;
        return 0;
    }
    bool isPrime = true;
    for (int i = 2; 1LL * i * i <= n; i++) {
        if (n % i == 0) { isPrime = false; break; }
    }
    std::cout << (isPrime ? "Prime" : "Not Prime") << std::endl;
    return 0;
}


