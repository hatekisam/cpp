#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

int menu()
{
    cout << "1. Full Angle\n";
    cout << "2. Right Angled Triangle\n";
    cout << "3. Letter A\n";
    cout << "4. Exit\n";
    int choice;
    cin >> choice;
    return choice;
}

void fullTriangle()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6 - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << std::endl;
    }
}

void halfTriangle()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6 - i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < i+1; k++)
        {
            cout << " ";
        }
        cout << std::endl;
    }
}

int main()
{

    cout << "Drawing App" << std::endl;
    while (1)
    {
        int choice = menu();
        switch (choice)
        {
        case 1:
            fullTriangle();
            break;
        case 2:
            halfTriangle();
            break;
        case 3:
            cout << "Letter A";
            break;
        case 4:
            return 0;
        default:
            break;
        }
    }
    return 0;
}