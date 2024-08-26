// Você está desenvolvendo um software para auxiliar no ensino de matemática para crianças. Uma das funcionalidades é calcular a soma dos primeiros N números naturais, onde N é um número inteiro positivo fornecido pelo usuário. O programa deve solicitar que a criança insira um número e, em seguida, calcular e exibir a soma dos números de 1 até N.

// Write a program that receives an integer N and calculates the sum of the first N natural numbers, displaying the result. The program should also validate the input, ensuring that N is a positive integer. If the input is invalid, the program should display an error message and prompt the user to enter a new value.

// Example
// Input
// 5
// Output
// The sum of the first 5 natural numbers is 15

#include <iostream>

int main()
{
    int number;
    int sum = 0;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (number <= 0 || std::cin.fail())
    {
        std::cout << "Invalid input, please enter a positive integer" << std::endl;
        return 0;
    }

    for (int i = 1; i <= number; i++)
    {
        sum += i;
    }

    std::cout << "The sum of the first " << number << " natural numbers is " << sum << std::endl;
}