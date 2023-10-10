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

    string sentence;
    std::getline(cin >> std::ws, sentence);

    cout << sentence << std::endl;
    int numOfSpace=0;
    for(auto i : sentence) if(isspace(i)) numOfSpace ++;
    cout << "It has " << sentence.length() - numOfSpace << " characters." << std::endl;


        return 0;
}