#include <iostream>

int main()
{
    std::cout << "Welcome to the calculator" << std::endl;

    int choice;
    std::cout << "Enter the operation you need: ";
    std::cin >> choice;

    switch (choice) {
    case 0:
        std::cout << "You chose 0" << std::endl;
        break;
    case 1:
        std::cout << "You chose 1" << std::endl;
        break;
    case 2:
        std::cout << "You chose 2" << std::endl;
        break;
    case 3:
        std::cout << "You chose 3" << std::endl;
        break;
    default:
        std::cout << "This choice has not been implemented!" << std::endl;
        break;
    }
}

