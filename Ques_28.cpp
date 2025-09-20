#include <iostream>

int main() {
    long long n;
    std::cout << "Enter number: ";
    std::cin >> n;

    if (n == 0) {
        std::cout << "Digits: 1" << std::endl;
        return 0;
    }
    if (n < 0) n = -n;

    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    std::cout << "Digits: " << count << std::endl;
    return 0;
}


