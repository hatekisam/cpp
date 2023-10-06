#include <iostream>
#include<cmath>

int main()
{

    double x = 3;
    double y = 4;
    double z;

    // max is used to get the maximum btn values
    z = std::max(x, y);
    std::cout << z << std::endl;

    //min is used to get the minimum btn values
    z = std::min(x, y);
    std::cout << z << std::endl;


    //some other functions from the cmath library

    //power of number 1 by number 2
    z = pow(2,3);
    std::cout << z << std::endl;

    //square root of a number
    z = sqrt(9);
    std::cout << z << std::endl;


    //getting the absolute value of a number
    z = abs(-20);
    std::cout << z << std::endl;

    //rounding number
    z = round(3.14);
    std::cout << z << std::endl;

    //rounding up
    z = ceil(6.14);
    std::cout << z << std::endl;

    //rounding down
    z = floor(7.14);
    std::cout << z << std::endl;

    return 0;
}
