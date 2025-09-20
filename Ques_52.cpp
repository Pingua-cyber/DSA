#include <iostream>

int main() {
    int n;
    std::cout << "Enter rows: ";
    std::cin >> n; 

    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) std::cout << "  ";
        for (int j = 1; j <= i; j++) {
            if (i == 1 || j == 1 || j == i)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
    return 0;
}


