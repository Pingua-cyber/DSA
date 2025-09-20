#include <iostream>

int main() {
    int n;
    std::cout << "Enter number (1-7): ";
    std::cin >> n;

    if (n == 1) std::cout << "Monday" << std::endl;
    else if (n == 2) std::cout << "Tuesday" << std::endl;
    else if (n == 3) std::cout << "Wednesday" << std::endl;
    else if (n == 4) std::cout << "Thursday" << std::endl;
    else if (n == 5) std::cout << "Friday" << std::endl;
    else if (n == 6) std::cout << "Saturday" << std::endl;
    else if (n == 7) std::cout << "Sunday" << std::endl;
    else std::cout << "Invalid" << std::endl;

    return 0;
}


