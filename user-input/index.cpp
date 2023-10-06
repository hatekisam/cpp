#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{

    // we use std::cin >>
    cout << "What is your name?" << std::endl;
    string name;

    // This function helps to input  a name contiaing spaces
    std::getline(std::cin, name);

    cout << "What is your age?" << std::endl;
    int age;
    cin >> age;

    // But if we put the std::cin function before the getline function ther whitespace left by cini would be taken by getline and int cousese a bug so inteade we use

    string address;
    std::getline(cin >> std::ws, address);

    cout << "Hello " << name << "!" << std::endl;
    cout << "You are " << age << " years old." << std::endl;
    cout << "Your address is " << address  << std::endl;


        return 0;
}