#include <iostream>

int Add(const int x, const int y) {
    return x + y;
}

int Sub(const int x, const int y) {
    return x - y;
}

int Multiply(const int x, const int y) {
    return x * y;
}

int Divide(const int x, const int y) {
    if (y != 0) {
        return x / y;
    }
    else {
        return 0;
    }
}


int main()
{
    std::cout << "Welcome to the calculator" << std::endl;

    int choice;
    std::cout << "Enter the operation you need: ";
    std::cin >> choice;

    int x, y;
    switch (choice) {
    case 0:
        std::cout << "You chose 0" << std::endl;
        std::cout << "Enter the first number: ";
        std::cin >> x;
        std::cout << "Enter the second number: ";
        std::cin >> y;
        printf("%i + %i = %i", x, y, Add(x, y));
        break;
    case 1:
        std::cout << "You chose 1" << std::endl;
        std::cout << "Enter the first number: ";
        std::cin >> x;
        std::cout << "Enter the second number: ";
        std::cin >> y;
        printf("%i - %i = %i", x, y, Sub(x, y));
        break;
    case 2:
        std::cout << "You chose 2" << std::endl;
        std::cout << "Enter the first number: ";
        std::cin >> x;
        std::cout << "Enter the second number: ";
        std::cin >> y;
        printf("%i * %i = %i", x, y, Multiply(x, y));
        break;
    case 3:
        std::cout << "You chose 2" << std::endl;
        std::cout << "Enter the first number: ";
        std::cin >> x;
        std::cout << "Enter the second number: ";
        std::cin >> y;
        printf("%i / %i = %i", x, y, Divide(x, y));
        break;
    default:
        std::cout << "This choice has not been implemented!" << std::endl;
        break;
    }
}

