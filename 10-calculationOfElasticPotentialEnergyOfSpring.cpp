#include <iostream>

int main()
{
    float k, x;
    std::cout << "Spring's elastic constant (k) in N/m: ";
    std::cin >> k;
    std::cout << "Spring's deformation (x) in meters: ";
    std::cin >> x;

    if (k < 0 || x < 0 || std::cin.fail())
    {
        std::cout << "The values of k and x must be numbers and greater than zero" << std::endl;
        return 0;
    }

    float Epel = (k * x * x) / 2;

    std::cout << "The elastic potential energy of the spring is " << Epel << " Joules" << std::endl;
}
