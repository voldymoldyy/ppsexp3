#include <iostream>

int main()
{
    int d;
    std::cout << "enter your vitamin D3 value(0-100): ";
    std::cin >> d;

    if (d >= 0)
    {
        if (0 <= d && d < 20)
        {
            std::cout << "deficinecy";
        }
        else if (20 < d && d < 30)
        {
            std::cout << "Insufficiency";
        }
        else if (30 < d && d < 100)
        {
            std::cout << "Sufficiency";
        }
        else
        {
            std::cout << "toxicity";
        }
    }
}