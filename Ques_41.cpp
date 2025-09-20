#include <iostream>

bool isArmstrong(int n) {
    int x = n;
    int sum = 0;
    while (x > 0) {
        int d = x % 10;
        sum += d * d * d;
        x /= 10;
    }
    return sum == n;
}

int main() {
    bool first = true;
    for (int i = 1; i < 1000; i++) {
        if (isArmstrong(i)) {
            if (!first) std::cout << " ";
            std::cout << i;
            first = false;
        }
    }
    std::cout << std::endl;
    return 0;
}


