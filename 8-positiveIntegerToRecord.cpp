// : Um sistema de registro de pontos em um campeonato esportivo exige que os usuários insiram um número inteiro positivo para registrar seus pontos. Implemente  um programa que continue solicitando ao usuário que insira um número até que ele  forneça um valor válido. O programa deve exibir uma mensagem de erro sempre que o usuário fornece um valor inválido

// A point registration system in a sports championship requires users to enter a positive integer to record their points. Implement a program that continues to ask the user to enter a number until they provide a valid value. The program should display an error message whenever the user provides an invalid value

#include <iostream>

int main()
{
    int points;

    while (true)
    {
        std::cout << "Enter your points: ";
        std::cin >> points;

        if (std::cin.fail() || points < 0)
        {

            std::cout << "Invalid input, please enter a positive integer" << std::endl;
            std::cin.clear();
            std::cin.ignore();
            continue;
        }

        break;
    }

    std::cout << "Your points are: " << points << std::endl;
}