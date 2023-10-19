#include <iostream>
#include <vector>

int countPartitions(int n)
{
    std::vector<int> partitionCount(n + 1, 0);

    // There's one way to partition 0
    partitionCount[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            partitionCount[j] += partitionCount[j - i];
        }
    }

    return partitionCount[n];
}

int main()
{
    int n = 5; // Change this to the number you want to find partitions for
    int result = countPartitions(n);

    std::cout << "The number of integer partitions for " << n << " is " << result << std::endl;

    return 0;
}
