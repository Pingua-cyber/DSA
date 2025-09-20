#include <iostream>

int main() {
    int N;
    std::cout << "Enter N: ";
    std::cin >> N;

    long long sum = 0;
    for (int i = 1; i <= N; i++) sum += 1LL * i * i * i;

    std::cout << "Sum: " << sum << std::endl;
    return 0;
}


