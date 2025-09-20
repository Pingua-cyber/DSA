#include <iostream>

bool isPrime(long long n) {
    if (n <= 1) return false;
    for (long long i = 2; i * i <= n; i++) if (n % i == 0) return false;
    return true;
}

int main() {
    long long n;
    std::cout << "Enter number: ";
    std::cin >> n;

    long long x = n + 1;
    while (!isPrime(x)) x++;
    std::cout << x << std::endl;
    return 0;
}


