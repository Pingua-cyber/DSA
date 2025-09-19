#include <iostream>

int main() {
    double principal, rate, time;

    std::cout << "Enter principal: ";
    std::cin >> principal;

    std::cout << "Enter rate (in % per year): ";
    std::cin >> rate;

    std::cout << "Enter time (in years): ";
    std::cin >> time;

    double simpleInterest = (principal * rate * time) / 100.0;
    std::cout << "Simple Interest: " << simpleInterest << std::endl;

    return 0;
}


