// Você está desenvolvendo um sistema de controle para um pequeno restaurante. O sistema precisa de um menu interativo que permita ao usuário escolher entre diferentes funcionalidades, como "Adicionar Item ao Pedido", "Remover Item do Pedido", "Exibir Total do Pedido", e "Finalizar". O programa deve continuar exibindo o menu até que o usuário escolha a opção de sair

// You are developing a control system for a small restaurant. The system needs an interactive menu that allows the user to choose between different functionalities, such as "Add Item to Order", "Remove Item from Order", "Display Order Total", and "Finish". The program should continue to display the menu until the user chooses the exit option

#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> items;
    int option = 0;
    int index;
    std::string item;
    bool exit = false;

    while (!exit)
    {

        std::cout << "Menu\n1. Add Item to Order\n2. Remove Item from Order\n3. Display Order Total\n4. Finish\n";
        std::cout << "Choose an option: ";

        if (!(std::cin >> option))
        {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        switch (option)
        {
        case 1:

            std::cout << "add the item: ";
            std::cin >> item;
            items.push_back(item);
            break;

        case 2:

            std::cout << "Enter the index of the item to remove (0 to " << items.size() - 1 << "): ";
            if (!(std::cin >> index) || index < 0 || index >= items.size())
            {
                std::cin.clear();
                std::cin.ignore();
                std::cout << "Invalid index. Please enter a valid index.\n";
                break;
            }

            items.erase(items.begin() + index);
            std::cout << "Item removed.\n";
            break;

        case 3:

            for (int i = 0; i < items.size(); i++)
            {
                std::cout << i << ". " << items[i] << std::endl;
            }
            std::cout << "\n";

            break;

        case 4:
            std::cout << "Finishing...\n";
            exit = true;
            break;

        default:

            std::cout << "Invalid option. Please choose a valid option.\n";
            break;
        }
    }

    return 0;
}
