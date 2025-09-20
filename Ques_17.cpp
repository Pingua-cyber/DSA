#include <iostream>

bool isLeap(int y) {
    if (y % 400 == 0) return true;
    if (y % 100 == 0) return false;
    return y % 4 == 0;
}

int main() {
    int startYear, endYear;
    std::cout << "Enter start year: ";
    std::cin >> startYear;
    std::cout << "Enter end year: ";
    std::cin >> endYear;

    for (int y = startYear; y <= endYear; y++) {
        if (isLeap(y)) std::cout << y << std::endl;
    }
    return 0;
}


