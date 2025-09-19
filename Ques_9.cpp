// If this file already exists empty, fill with the solution.
#include <iostream>

int main() {
    int day, month, year;
    char slash1, slash2;

    std::cout << "Enter date (DD/MM/YYYY): ";
    std::cin >> day >> slash1 >> month >> slash2 >> year;

    if (slash1 == '/' && slash2 == '/') {
        std::cout << "Day - " << day << " , Month - " << month << " , Year - " << year << std::endl;
    } else {
        std::cout << "Invalid date format" << std::endl;
    }
    return 0;
}


