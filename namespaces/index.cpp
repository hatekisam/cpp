#include <iostream>

// Namespace help provide a solution btn conflicting on names in large project

namespace first
{
    int x = 0;
}

namespace second
{
    int x = 2;
}

// useing namespace std removes the prefix of std every time printing but it is not safe

using namespace std;

// The safe way is this

using std::cout;
using std::string;

int main()
{
    cout << first::x << endl;
    cout << second::x << endl;
}

int main()
{

    int x = 1;

    // This will dipslay x is 1
    cout << x << endl;

    // This will display x is 0
    cout << first::x << endl;

    return 0;
}