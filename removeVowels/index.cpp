#include <iostream>
#include <string>
#include <cctype>

std::string removeVowels(const std::string& input) {
    std::string result = "";
    for (char c : input) {
        if (std::isalpha(c) && !std::strchr("aeiouAEIOU", c)) {
            result += c;
        } else if (c == ' ') {
            result += ' ';
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::string result = removeVowels(input);

    std::cout << "String with vowels removed: " << result << std::endl;

    return 0;
}
