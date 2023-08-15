#include <iostream>

int main()
{
    int y;
    std::cout << "enter year: ";
    std::cin >> y;

    if (y % 100 == 0)
    {
        std::cout << "it is centennial year";
        std::cout << "\n";
        if (y % 400 == 0)
        {
            std::cout << "it is a leap year";
        }
        else
        {
            std::cout << "it is not a leap year";
        }
    }
    else if (y % 4 == 0)
    {
        std::cout << "it is a leap year";
    }
    else
    {
        std::cout << "it is not a leap year";
    }
}