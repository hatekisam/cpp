#include <string>
#include <map>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>

std::map<std::string, int> units = {
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
	std::vector<int> numbers;
	std::vector<std::string> numberVector = splitSentence(number, ' ');
	for (auto i : numberVector)
	{
		if (i == "and")
			continue;
		if (units.find(i) != units.end())
		{
			numbers.push_back(units[i]);
			continue;
		}
		if (i.find('-') != std::string::npos)
		{
			numbers.push_back(units[i.substr(0, i.find('-'))]);
			numbers.push_back(units[i.substr(i.find('-') + 1)]);
		}
	}
	if (numbers[1] == 100 && std::find(numbers.begin(), numbers.end(), 1000) == numbers.end() && numbers.size() > 1)
	{
		while (numbers.size() > 1)
		{
			if (numbers[0] > numbers[1])
			{
				numbers[0] = numbers[0] + numbers[1];
				numbers.erase(numbers.begin() + 1);
			}
			else
			{
				numbers[0] = numbers[0] * numbers[1];
				numbers.erase(numbers.begin() + 1);
			}
		}
		return numbers[0];
	}
	else
	{
		while (std::find(numbers.begin(), numbers.end(), 1000) != numbers.end())
		{
			if (numbers[0] < numbers[1])
			{
				numbers[0] = numbers[0] * numbers[1];
			}
			else
			{
				numbers[0] += numbers[1];
			}
			if(numbers[1] == 1000){
				numbers.erase(numbers.begin() + 1);
				break;
			}else{
				numbers.erase(numbers.begin() + 1);
			}
		}
		std::vector<int> subNum(numbers.begin()+1, numbers.end());
		while (subNum.size() > 1)
		{
			if (subNum[0] > subNum[1])
			{
				subNum[0] += subNum[1];
			}
			else
			{
				subNum[0] *= subNum[1];
			}
			subNum.erase(subNum.begin() + 1);
		}
		return numbers[0] + subNum[0];
	}
}

int main()
{
	std::string number;
	std::getline(std::cin, number);
	std::cout << parse_int(number) << std::endl;
	return 0;
}