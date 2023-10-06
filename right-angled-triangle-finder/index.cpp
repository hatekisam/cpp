#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

int menu()
{
    cout << "1. Find  hypotenus\n";
    cout << "2. Find height\n";
    cout << "3. Find base\n";
    cout << "4. Exit\n";
    int choice;
    cin >> choice;
    return choice;
}

void hypotenuse()
{
    cout << "Finding hypotenus" << std::endl;
    double height;
    double base;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter base: ";
    cin >> base;
    double hypotenuse = sqrt((height * height) + (base * base));
    cout << "The hypotenus is " << hypotenuse << std::endl;
}

void height()
{
    cout << "Finding height" << std::endl;
    double hypotenuse;
    double base;
    cout << "Enter hypotenuse: ";
    cin >> hypotenuse;
    cout << "Enter base: ";
    cin >> base;
    double height = sqrt((hypotenuse * hypotenuse) - (base * base));
    cout << "The height is " << height << std::endl;
}

void base()
{
    cout << "Finding base" << std::endl;
    double hypotenuse;
    double height;
    cout << "Enter hypotenuse: ";
    cin >> hypotenuse;
    cout << "Enter height: ";
    cin >> height;
    double base = sqrt((hypotenuse * hypotenuse) - (height * height));
    cout << "The base is " << base << std::endl;
}


int main()
{

    cout << "Right Angled Triangle Calculator" << std::endl;
    while (1)
    {
        int choice = menu();
        switch (choice)
        {
        case 1:
            hypotenuse();
            break;
        case 2:
            height();
            break;
        case 3:
            base();
            break;
        case 4:
            return 0;
        default:
            break;
        }
    }
    return 0;
}