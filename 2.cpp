#include <iostream>

int main()
{
    char x;
    std::cout << "enter a character(a-z): ";
    std::cin >> x;

    if (x >= 'A' && x <= 'Z')
    {
        x = x + 32;
        std::cout << x;
    }
    else if (x >= 'a' && x <= 'z')
    {
        x = x - 32;
        std::cout << x;
    }
    else
    {
        std::cout << "INVALID CHARACTER";
    }
}