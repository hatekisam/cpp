#include <iostream>
#include <string>
#include <stack>

int sumOfPolish(std::string arr[])
{
    int res = 0;
    std::stack<int> stack;

    for (int i = 0; i < sizeof(arr) / sizeof(std::string); i++) {
        if (arr[i] == "+" || arr[i] == "-" || arr[i] == "*" || arr[i] == "/") {
            if (stack.size() < 2) {
                std::cerr << "Not enough operands for the operator: " << arr[i] << std::endl;
                return 0;  // You can choose how to handle this error.
            }
            int b = stack.top();
            stack.pop();
            int a = stack.top();
            stack.pop();
            if (arr[i] == "+")
                stack.push(a + b);
            else if (arr[i] == "-")
                stack.push(a - b);
            else if (arr[i] == "*")
                stack.push(a * b);
            else if (arr[i] == "/")
                stack.push(a / b);
        } else {
            stack.push(std::stoi(arr[i]));
        }
    }

    if (stack.size() == 1)
        return stack.top();
    else {
        std::cerr << "Invalid expression: Stack not empty at the end" << std::endl;
        return 0;  // You can choose how to handle this error.
    }
}

int main()
{
    std::string arr[] = {"2", "1", "+", "3", "*"};
    int res = sumOfPolish(arr);
    std::cout << res << std::endl;
    return 0;
}
