#include <iostream>

int main() {
    int N;
    std::cout << "Enter N: ";
    std::cin >> N;

    if (N <= 0) { std::cout << 0 << std::endl; return 0; }
    if (N == 1) { std::cout << 0 << std::endl; return 0; }
    if (N == 2) { std::cout << 1 << std::endl; return 0; }

    long long a = 0, b = 1, c;
    for (int i = 3; i <= N; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    std::cout << b << std::endl;
    return 0;
}


