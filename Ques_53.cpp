#include <iostream>

int main() {
    int n;
    std::cout << "Enter rows: ";
    std::cin >> n; 

    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) std::cout << "  ";
        for (int j = 1; j <= 2 * i - 1; j++) std::cout << "* ";
        std::cout << std::endl;
    }
    return 0;
}


