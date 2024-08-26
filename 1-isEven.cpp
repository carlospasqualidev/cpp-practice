
// You have been hired to develop an entry control system for an automated parking lot. One of the system's features is to check whether the vehicle's license plate number, represented by an integer, is even or odd. Vehicles with even-numbered plates receive a discount on the fee. Write a program that receives the license plate number and indicates whether it is even or odd, displaying an appropriate message for each case.

// Você foi contratado para desenvolver um sistema de controle de entrada em um estacionamento automatizado. Uma das funcionalidades do sistema é verificar se o número da placa do veículo, representado por um número inteiro, é par ou ímpar. Veículos com placas de número par têm desconto na tarifa. Escreva um programa que receba o número da placa e indique se ele é par ou ímpar, exibindo uma mensagem adequada para cada caso

#include <iostream>

int main()
{
    int number;
    std::cout << "input License plate number: ";
    std::cin >> number;

    std::cout << "License plate " << number << " is " << (number % 2 == 0 ? "even" : "odd") << std::endl;
}