#include <iostream>
#include <math.h>
using namespace std;

void update(int *a, int *b)
{
    *a = *a + *b;
    *b = *b - *a;
}

int main()
{
    int a, b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    update(&a, &b);
    cout << "The value of a is now : " << a << endl;
    cout << "The value of b is now : " << b << endl;
    return 0;
}
