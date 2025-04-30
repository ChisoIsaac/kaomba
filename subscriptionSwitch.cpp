#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));

    int daysUntilExpiration = std::rand() % 12;

    switch (daysUntilExpiration) {
        case 0:
        std::cout << "your subscription has expired " << std::endl;
        break;

        case 1:
        std::cout << "your subscription will expire within a day! Renew now and save 20%" << std::endl;
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        std::cout << "your subscription expires in " << daysUntilExpiration << "days. Renew now and save 10%" << std::endl;
        break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        std::cout << "your subscription will expire soon. Renew now!" << std::endl;
        break;
        default:
        std::cout << "you have ana active subscription" << std::endl;
    }
    return 0;
}