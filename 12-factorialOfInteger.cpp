#include <iostream>
#include <string>

int main()
{
    int number;
    std::string dot;

    std::cout << "Enter the number for which you want to calculate the factorial: ";
    std::cin >> number;

    if (number <= 0 || std::cin.fail())
    {
        std::cout << "The value must be a positive integer greater than zero." << std::endl;
        return 0;
    }

    int factorial = 1;

    std::cout << "Factorial of " << number << ":" << std::endl;

    for (int i = number; i >= 1; i--)
    {
        factorial *= i;
        dot = i > 1 ? "." : " = ";
        std::cout << i << dot;
    }
    std::cout << factorial << std::endl;

    return 0;
}
