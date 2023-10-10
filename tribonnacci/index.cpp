#include<vector>
#include<iostream>


std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    std::vector<int> result;
  result=signature;
  for(int i=3;i<=n;i++){
    int size = signature.size()-1;
    result.push_back(result[size]+result[size-1]+result[size-2]);
  }
    return result;
}

int main(){
    std::cout << "Enter the length of the sequence" << std::endl;
    int n;
    std::cin >> n;
    std::vector<int> signature;
    std::cout << "Enter the elements of the signature" << std::endl;
    for(int i=0;i<n;i++){
        int x;
        std::cin>>x;
        signature.push_back(x);
    }
    std::cout << tribonacci(signature,n) <<std::endl;
    return 0;
}

