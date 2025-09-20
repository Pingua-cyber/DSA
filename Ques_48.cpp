#include <iostream>

int main() {
    int n;
    std::cout << "Enter rows: ";
    std::cin >> n; 

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << j;
            if (j < i) std::cout << ' ';
        }
        std::cout << std::endl;
    }
    return 0;
}


