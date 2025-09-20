#include <iostream>

int main() {
    int n;
    std::cout << "Enter number: ";
    std::cin >> n;

    long long fact = 1;
    for (int i = 2; i <= n; i++) fact *= i;

    std::cout << "Factorial: " << fact << std::endl;
    return 0;
}


