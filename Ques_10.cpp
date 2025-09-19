#include <iostream>

int main() {
    int hour, minute;
    char colon;

    std::cout << "Enter time (HH:MM): ";
    std::cin >> hour >> colon >> minute;

    if (colon == ':') {
        std::cout << "Hour - " << hour << " , Minute - " << minute << std::endl;
    } else {
        std::cout << "Invalid time format" << std::endl;
    }
    return 0;
}


