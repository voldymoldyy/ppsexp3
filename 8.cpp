#include <iostream>

int main()
{
    int a;
    std::cout << "enter operand 1: ";
    std::cin >> a;

    int b;
    std::cout << "enter operand 2: ";
    std::cin >> b;

    char o;
    std::cout << "enter operator: ";
    std::cin >> o;

    switch (o)
    {
    case '+':
        std::cout << a + b;
        break;

    case '-':
        std::cout << a - b;
        break;

    case '*':
        std::cout << a * b;
        break;

    case '/':
        std::cout << a / b;
        break;

    default:
        std::cout << "INVALID OPERATOR";
        break;
    }
}