#include <iostream>
#include <cstdint>
#include<cmath>
#include<algorithm>
#include<vector>

using namespace std;

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



uint64_t hamber(int n)
{
  vector<uint64_t> allNumbers; 
  for(int i=0;i<25;i++){
    for(int j=0;j<24;j++){
      for(int k = 0;k<24;k++){
        uint64_t num = static_cast<uint64_t>(pow(2, i) * pow(3, j) * pow(5, k));
        if(num != 0) allNumbers.push_back(num);
        if(allNumbers.size() == 13282) break;
      }
    }
  }
  sort(allNumbers.begin(),allNumbers.end());
    return allNumbers[n-1];
}

int main()
{
	std::cout << "enter a number" << std::endl;
	int num;
	std::cin >> num;
	std::cout << hamber(num) << std::endl;
	return 0;
}