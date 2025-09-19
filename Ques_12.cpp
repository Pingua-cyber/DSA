#include <iostream>

int main() {
    int age;
    std::cout << "Enter age: ";
    std::cin >> age;

    if (age < 13)
        std::cout << "Child" << std::endl;
    else if (age < 20)
        std::cout << "Teenager" << std::endl;
    else if (age < 60)
        std::cout << "Adult" << std::endl;
    else
        std::cout << "Senior" << std::endl;

    return 0;
}


