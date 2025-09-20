#include <iostream>

int main() {
    int n;
    std::cout << "Enter size: ";
    std::cin >> n; 

    int mid = (n + 1) / 2;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            bool star = (j == 1) || (i + j == mid + 1) || (i - j == mid - 1);
            std::cout << (star ? "* " : "  ");
        }
        std::cout << std::endl;
    }
    return 0;
}


