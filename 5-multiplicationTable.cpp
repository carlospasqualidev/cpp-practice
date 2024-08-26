// Em uma escola, os professores pediram a criação de uma ferramenta interativa que ajude os alunos a praticar a tabuada. Escreva um programa que solicite  ao aluno um número inteiro e, em seguida, exiba a tabuada desse número de 1 a 10, de forma clara e organizada.

// In a school, teachers have requested the creation of an interactive tool to help students practice the multiplication table. Write a program that asks the student for an integer and then displays the multiplication table of that number from 1 to 10, in a clear and organized way.

#include <iostream>

int main()
{
    int number;
    std::cout << "Enter an integer to display the multiplication table: ";
    std::cin >> number;

    if (std::cin.fail() || number < 0)
    {
        std::cout << "Invalid input, please enter an positive integer" << std::endl;
        return 0;
    }

    for (int i = 1; i <= 10; i++)
    {
        std::cout << number << " x " << i << " = " << number * i << std::endl;
    }
}