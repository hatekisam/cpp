#include <string>
#include <map>
#include <vector>
#include <sstream>
#include <iostream>

std::map<std::string, int> units = {
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

std::vector<std::string> splitString(const std::string &str)
{
	std::vector<std::string> words;
	std::string word;
	std::istringstream strStream(str);
	while (std::getline(strStream, word, ' '))
	{
		words.push_back(word);
	}
	return words;
}

long parse_int(std::string number)
{
	if (units.find(number) != units.end())
	{
		return units[number];
	}
	else
	{
		std::vector<int> numbers;
		std::vector<std::string> vectorOfWords = splitString(number);
		for (auto i : vectorOfWords)
		{
			if (units.find(i) != units.end())
			{
				numbers.push_back(units[i])
			}
			else if (i.find('-') != std::string::npos)
			{
				numbers.push_back(units[i.substr(0, i.find('-'))])
				numbers.push_back(units[i.substr(i.find('-') + 1, i.size())])
			}
		}
		for(auto i : numbers) {
			std::cout << i << std::endl;
		}
	}
}

int main()
{
	std::string number;
	std::getline(std::cin, number);
	std::cout << parse_int(number) << std::endl;
	return 0;
}