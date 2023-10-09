#include <iostream>

int square_digits(int num)
{
	std::string result = "";
	while (num > 0)
	{
		int numberToAdd = (num % 10) * (num % 10);
		result = std::to_string(numberToAdd) + result;
		std::cout << result << std::endl;
		num = num / 10;
	}
	return std::stoi(result);
}

int main()
{
	std::cout << "enter a number" << std::endl;
	int num;
	std::cin >> num;
	std::cout << "-----------------------------------------------";
	std::cout << square_digits(num) << std::endl;
	return 0;
}