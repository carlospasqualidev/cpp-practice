// You are an educational software developer creating a system to record student grades. Write a program that receives a grade from 0 to 100 and classifies it as "A", "B", "C", "D", or "F", based on the following scale: A (90-100), B (80-89), C (70-79), D (60-69), F (0-59). The program should display the classification along with a motivational message for the student.

// Você é um desenvolvedor de software educacional e está criando um sistema para registrar as notas dos alunos. Escreva um programa que receba uma nota  de 0 a 100 e a classifique em "A", "B", "C", "D", ou "F", com base na seguinte escala:  A (90-100), B (80-89), C (70-79), D (60-69), F (0-59). O programa deve exibir a classificação junto com uma mensagem motivacional para o aluno.

#include <iostream>

int main()
{
    int grade;
    std::cout << "Enter the grade, the range must be from 0 to 100: ";
    std::cin >> grade;

    if (grade < 0 || grade > 100 || std::cin.fail())
    {
        std::cout << "invalid grade range, use 0 to 100" << std::endl;
        return 0;
    }

    if (grade >= 90)
    {
        std::cout << "A - Excellent work! Keep it up!" << std::endl;
    }
    else if (grade >= 80)
    {
        std::cout << "B - Good job! Keep it up!" << std::endl;
    }
    else if (grade >= 70)
    {
        std::cout << "C - Not bad! Keep it up!" << std::endl;
    }
    else if (grade >= 60)
    {
        std::cout << "D - You can do better! Keep it up!" << std::endl;
    }
    else
    {
        std::cout << "F - You need to study more! Keep it up!" << std::endl;
    }
}