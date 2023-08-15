#include <iostream>

int main()
{
    int a;
    std::cout << "enter a number: ";
    std::cin >> a;

    if (a % 3 == 0 && a % 5 == 0)
    {
        std::cout << "BOTH 3 & 5";
    }
    else if (a % 3 == 0)
    {
        std::cout << "THREE";
    }
    else if (a % 5 == 0)
    {
        std::cout << "FIVE";
    }
    else
    {
        std::cout << "NONE";
    }
}