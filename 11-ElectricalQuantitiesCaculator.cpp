#include <iostream>

int main()
{
    int option = 0;
    float current, resistance, voltage;
    bool exit = false;

    while (!exit)
    {
        std::cout << "*********************************************" << std::endl;
        std::cout << "ELECTRICAL QUANTITIES CALCULATOR" << std::endl;
        std::cout << "*********************************************" << std::endl;

        std::cout << "1. Voltage (in Volts)\n2. Resistance (in Ohms)\n3. Current (in Amperes)\n4. Exit\n";
        std::cout << "*********************************************" << std::endl;
        std::cout << "Which quantity would you like to calculate?" << std::endl;

        if (!(std::cin >> option))
        {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Please enter a valid option.\n\n";
            continue;
        }

        switch (option)
        {
        case 1:
            std::cout << "Enter the resistance (in Ohms): ";
            std::cin >> resistance;

            std::cout << "Enter the current (in Amperes): ";
            std::cin >> current;

            voltage = current * resistance;
            std::cout << "The voltage is " << voltage << " Volts.\n\n";
            break;

        case 2:
            std::cout << "Enter the voltage (in Volts): ";
            std::cin >> voltage;

            std::cout << "Enter the current (in Amperes): ";
            std::cin >> current;

            resistance = voltage / current;
            std::cout << "The resistance is " << resistance << " Ohms.\n\n";
            break;

        case 3:
            std::cout << "Enter the voltage (in Volts): ";
            std::cin >> voltage;

            std::cout << "Enter the resistance (in Ohms): ";
            std::cin >> resistance;

            current = voltage / resistance;
            std::cout << "The current is " << current << " Amperes.\n\n";
            break;

        case 4:
            std::cout << "\n\nExiting the program...\n\n";
            exit = true;
            break;

        default:
            std::cout << "Please enter a valid option.\n\n";
            break;
        }
    }

    return 0;
}
