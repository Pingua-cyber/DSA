#include <iostream>

int main() {
    int n;
    std::cout << "Enter odd size: ";
    std::cin >> n; 
    int mid = n / 2 + 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            bool star = false;
            if (i == 1 && j >= mid) star = true;            // top arm
            if (i == mid) star = true;                      // middle bar
            if (i == n && j <= mid) star = true;            // bottom arm
            if (j == 1 && i >= mid) star = true;            // left arm
            if (j == mid) star = true;                      // center column
            if (j == n && i <= mid) star = true;            // right arm
            std::cout << (star ? "* " : "  ");
        }
        std::cout << std::endl;
    }
    return 0;
}


