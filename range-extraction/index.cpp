#include <string>
#include <iostream>
#include <vector>

std::string range_extraction(std::vector<int> args)
{
	std::string res;
	std::vector<int> currentRange;
	if (args.empty())
		return res;
	for (long i = 0; i < args.size() - 1; i++)
	{
		if (args[i + 1] - args[i] == 1)
		{
			currentRange.push_back(args[i]);
			if (i + 1 == args.size() - 1)
			{
				currentRange.push_back(args[i + 1]);
			}
		}
		else
		{
			if (currentRange.size() >= 3)
			{
				for(auto i:currentRange) std::cout << "current range eleemtn" << i  << "," << std::endl;
				res += std::to_string(currentRange[0]) + "-" + std::to_string(currentRange.back()) + ",";
			}
			else
			{
				for (auto i : currentRange)
					res += std::to_string(i) + ",";
			}
			std::cout << "Checking if it is" << std::endl;
			if(currentRange.empty()){
				res += std::to_string(args[i]);
			}else if(args[i] != currentRange.back()) {
				res += std::to_string(args[i]) + ",";
			}
			currentRange.clear();
			currentRange.shrink_to_fit();
			
		}
	}
	if (currentRange.size() >= 3)
	{
		res += std::to_string(currentRange[0]) + "-" + std::to_string(currentRange[currentRange.size() - 1]) + ",";
		currentRange.clear();
		currentRange.shrink_to_fit();
	}
	else
	{
		for (auto i : currentRange)
			res += std::to_string(i) + ",";
	}
	return res;
}

int main()
{
	std::string res = range_extraction({-6, -3, -2, -1, 0, 1, 3, 4, 5, 7, 8, 9, 10, 11, 14, 15, 17, 18, 19, 20});
	std::cout << res << std::endl;
	return 0;
}