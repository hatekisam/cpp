#include <string>
#include <map>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>

std::map<std::string, long> units = {
    {"zero", 0},
    {"one", 1},
    {"two", 2},
    {"three", 3},
    {"four", 4},
    {"five", 5},
    {"six", 6},
    {"seven", 7},
    {"eight", 8},
    {"nine", 9},
    {"ten", 10},
    {"eleven", 11},
    {"twelve", 12},
    {"thirteen", 13},
    {"fourteen", 14},
    {"fifteen", 15},
    {"sixteen", 16},
    {"seventeen", 17},
    {"eighteen", 18},
    {"nineteen", 19},
    {"twenty", 20},
    {"thirty", 30},
    {"forty", 40},
    {"fifty", 50},
    {"sixty", 60},
    {"seventy", 70},
    {"eighty", 80},
    {"ninety", 90},
    {"hundred", 100},
    {"thousand", 1000},
    {"million", 1000000}};

std::vector<std::string> splitSentence(const std::string &str, char separator)
{
    std::vector<std::string> words;
    std::string word;
    std::istringstream strStream(str);
    while (std::getline(strStream, word, separator))
    {
        words.push_back(word);
    }
    return words;
}

long parse_int(std::string number)
{
    if (units.find(number) != units.end())
        return units[number];
    std::vector<long> numbers;
    std::vector<std::string> numberVector = splitSentence(number, ' ');
    long current_number = 0;

    for (const auto &word : numberVector)
    {
        if (units.find(word) != units.end())
        {
            if (word == "hundred")
            {
                current_number *= 100;
            }
            else
            {
                current_number += units[word];
            }
        }
        else if (word == "and")
        {
            continue;
        }
        else
        {
            // Handle the case where a number has a hyphen, e.g., "twenty-three"
            std::vector<std::string> parts = splitSentence(word, '-');
            long hyphen_number = 0;
            for (const auto &part : parts)
            {
                hyphen_number += units[part];
            }
            current_number += hyphen_number;
        }
    }

    numbers.push_back(current_number);

    long result = 0;
    for (long num : numbers)
    {
        if (num == 1000)
        {
            result *= 1000;
        }
        else
        {
            result += num;
        }
    }
    return result;
}
int main()
{
    std::string number;
    std::getline(std::cin, number);
    std::cout << parse_int(number) << std::endl;
    return 0;
}