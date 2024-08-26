// Imagine that you are developing an application for a lottery system. In a draw, two numbers are selected from a set of 100 numbers. Write a program that receives these two drawn numbers and determines which one is greater, displaying the result. If the numbers are equal, the program should indicate that there is a tie.

// Imagine que você está desenvolvendo uma aplicação para um sistema de loteria. Em um sorteio, dois números são extraídos de um conjunto de 100 números. Escreva um programa que receba esses dois números sorteados e determine qual deles é o maior, exibindo o resultado. Caso os números sejam iguais, o programa deve indicar que houve um empate.

#include <iostream>

int main()
{
    int number1, number2;
    std::cout << "input the first number: ";
    std::cin >> number1;
    std::cout << "input the second number: ";
    std::cin >> number2;

    if (number1 > number2)
    {
        std::cout << "The greater number is " << number1 << std::endl;
    }
    else if (number2 > number1)
    {
        std::cout << "The greater number is " << number2 << std::endl;
    }
    else
    {
        std::cout << "There is a tie" << std::endl;
    }
}