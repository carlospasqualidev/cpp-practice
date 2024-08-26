#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> items; // Vetor para armazenar os itens
    int option = 0;                 // Variável para armazenar a opção escolhida
    int index;
    std::string item;
    bool exit = false; // Flag para controlar o loop

    while (!exit)
    {
        // Exibe o menu
        std::cout << "Menu\n1. Add Item to Order\n2. Remove Item from Order\n3. Display Order Total\n4. Finish\n";
        std::cout << "Choose an option: ";

        // Verifica se a entrada é válida
        if (!(std::cin >> option))
        {
            std::cin.clear();  // Limpa o estado de erro
            std::cin.ignore(); // Ignora a entrada inválida
            std::cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        // Processa a opção escolhida
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
                std::cin.clear();  // Limpa o estado de erro
                std::cin.ignore(); // Ignora a entrada inválida
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
