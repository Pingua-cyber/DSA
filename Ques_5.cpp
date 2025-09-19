#include <iostream>

int main() {
    double costPerDozen, sellPerDozen;
    std::cout << "Enter cost price per dozen (bananas): ";
    std::cin >> costPerDozen;
    std::cout << "Enter selling price per dozen (bananas): ";
    std::cin >> sellPerDozen;

    double costPerBanana = costPerDozen / 12.0;
    double sellPerBanana = sellPerDozen / 12.0;
    int quantity = 25;
    double profitOrLoss = (sellPerBanana - costPerBanana) * quantity;

    if (profitOrLoss > 0)
        std::cout << "Profit on 25 bananas: " << profitOrLoss << std::endl;
    else if (profitOrLoss < 0)
        std::cout << "Loss on 25 bananas: " << -profitOrLoss << std::endl;
    else
        std::cout << "No profit no loss on 25 bananas." << std::endl;

    return 0;
}


