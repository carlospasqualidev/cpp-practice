//  Um banco deseja implementar uma funcionalidade que ajuda os clientes a preencherem corretamente os campos numéricos de um formulário digital. Escreva um programa que receba um número inteiro de qualquer tamanho e conte quantos dígitos ele possui. O programa deve exibir a quantidade de dígitos juntamente com uma mensagem que ajude o usuário a entender se ele preencheu corretamente o campo.

// A bank wants to implement a feature that helps customers correctly fill in the numeric fields of a digital form. Write a program that receives an integer of any size and counts how many digits it has. The program should display the number of digits along with a message that helps the user understand if they have correctly filled in the field.

#include <iostream>
#include <string>

int main()
{
    std::string code;
    std::cout << "Enter an document number: ";
    std::cin >> code;

    if (code.length() < 11)
    {
        std::cout << "The document number " << code << " has " << code.length() << " digit(s), please enter a valid document number (11)" << std::endl;
        return 0;
    }

    std::cout << "The document number is valid!" << std::endl;
}