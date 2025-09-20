#include <iostream>

int main() {
    int n;
    std::cout << "Enter size: ";
    std::cin >> n; 

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) std::cout << "* ";
            else std::cout << "  ";
        }
        std::cout << std::endl;
    }
    return 0;
}


