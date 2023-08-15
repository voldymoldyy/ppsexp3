#include <iostream>
#include <cmath>

int main()
{
    float a;
    std::cout << "enter a: ";
    std::cin >> a;

    float b;
    std::cout << "enter b: ";
    std::cin >> b;

    float c;
    std::cout << "enter c: ";
    std::cin >> c;

    float r1 = 0;
    float r2 = 0;
    float real_part = 0;
    float img_part = 0;

    float d;
    d = (b * b) - (4 * a * c);

    if (d > 0)

    {

        r1 = (-b + sqrt(d)) / 2 * a;
        r2 = (-b - sqrt(d)) / 2 * a;

        std::cout << "root 1: " << r1;
        std::cout << "\n";
        std::cout << "root 2: " << r2;
    }

    else if (d == 0)
    {
        std::cout << "roots are real and same";
        std::cout << "\n";
        r1 = -b / (2 * a);
        std::cout << "root 1: " << r1;
    }
    else
    {
        std::cout << "roots are complex and diffrent";
        std::cout << "\n";
        real_part = -b / (2 * a);
        img_part = sqrt(-d) / (2 * a);

        std::cout << "real part: " << real_part;
        std::cout << "\n";
        std::cout << "imaginary part: " << img_part;
    }
}