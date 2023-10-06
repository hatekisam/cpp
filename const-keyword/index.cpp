#include <iostream>

int main()
{

    //when you want a value to be constant to add const keyword and also make it uppercase
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    return 0;
}