//  Um professor de matemática está criando um aplicativo para ensinar a sequência de Fibonacci aos alunos. Escreva um programa que receba um número inteiro N e calcule os N primeiros termos da sequência de Fibonacci. O programa deve exibir os termos da sequência, explicando que cada número é a soma dos dois anteriores.

// A math teacher is creating an application to teach the Fibonacci sequence to students. Write a program that receives an integer N and calculates the first N terms of the Fibonacci sequence. The program should display the terms of the sequence, explaining that each number is the sum of the two previous ones.

#include <iostream>

int main()
{
    int number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (number <= 0 || std::cin.fail())
    {
        std::cout << "Invalid input, please enter a positive integer" << std::endl;
        return 0;
    }

    int fibonacci = 0;
    int nextFibonacci = 1;

    for (int i = 0; i < number; i++)
    {
        std::cout << fibonacci << " ";

        fibonacci = nextFibonacci;
        nextFibonacci = fibonacci + nextFibonacci;
    }
}