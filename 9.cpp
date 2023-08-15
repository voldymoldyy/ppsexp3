#include <iostream>
#include <cmath>

int main()
{
    std::string shape;
    std::cout << "enter the geometry of the shape for the area: ";
    std::cin >> shape;

    if (shape == "triangle")
    {
        float a;
        std::cout << "enter side 1: ";
        std::cin >> a;

        float b;
        std::cout << "enter side 1: ";
        std::cin >> b;

        float c;
        std::cout << "enter side 1: ";
        std::cin >> c;

        float s = (a + b + c) / 2;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        std::cout << "area of triangle: " << area;
    }
    else if (shape == "rectangle")
    {
        float length;
        std::cout << "enter length: ";
        std::cin >> length;

        float breadth;
        std::cout << "enter breadth: ";
        std::cin >> breadth;

        float area = length * breadth;
        std::cout << "area of rectangle: " << area;
    }
    else if (shape == "circle")
    {
        float r;
        std::cout << "enter radius: ";
        std::cin >> r;

        float area = 3.14 * r * r;
        std::cout << "area of circle: " << area;
    }
    else if (shape == "sphere")
    {
        float r;
        std::cout << "enter radius: ";
        std::cin >> r;

        float area = 4 * 3.14 * r * r;
        std::cout << "area of sphere: " << area;
    }
    else
    {
        std::cout << "INCOMPATABLE SHAPE";
    }
}