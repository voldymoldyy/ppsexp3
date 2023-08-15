#include <iostream>
#include <cmath>

int main()
{
    double sales;
    std::cout << "enter sales amount: ";
    std::cin >> sales;

    double discount;
    double amount;
    if (sales > 5000)
    {
        discount = 0.12 * sales;
        amount = sales - discount;

        std::cout << "discount: " << discount;
        std::cout << "\n";
        std::cout << "total amount: " << amount;
    }
    else
    {
        discount = 0.07 * sales;
        amount = sales - discount;

        std::cout << "discount: " << discount;
        std::cout << "\n";
        std::cout << "total amount: " << amount;
    }
}