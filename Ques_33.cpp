#include <iostream>

int main() {
    int N;
    std::cout << "Enter N: ";
    std::cin >> N;

    long long a = 0, b = 1;
    for (int i = 1; i <= N; i++) {
        std::cout << a;
        if (i < N) std::cout << " ";
        long long c = a + b;
        a = b;
        b = c;
    }
    std::cout << std::endl;
    return 0;
}


