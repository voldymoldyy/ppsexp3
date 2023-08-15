#include <iostream>

int main()
{
    char a;
    std::cout << "enter an alphabet: ";
    std::cin >> a;

    switch (a)
    {
    case 'a':
        std::cout << "vowel";
        break;

    case 'e':
        std::cout << "vowel";
        break;

    case 'i':
        std::cout << "vowel";
        break;

    case 'o':
        std::cout << "vowel";
        break;

    case 'u':
        std::cout << "vowel";
        break;

    default:
        std::cout << "consonant";
        break;
    }
}