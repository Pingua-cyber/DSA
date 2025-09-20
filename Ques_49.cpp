#include <iostream>

int main() {
    int n;
    std::cout << "Enter rows (<=26): ";
    std::cin >> n; 

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            char ch = 'A' + j;
            std::cout << ch;
            if (j + 1 < i) std::cout << ' ';
        }
        std::cout << std::endl;
    }
    return 0;
}


