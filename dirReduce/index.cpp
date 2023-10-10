#include<algorithm>
#include<vector>
#include<string>
#include<iostream>

class DirReduction
{
public:
    static std::vector<std::string> dirReduc(std::vector<std::string> &arr){
      std::vector<std::string> res;
      int y = std::count(arr.begin(),arr.end(),"NORTH") - std::count(arr.begin(),arr.end(),"SOUTH");
      int x = std::count(arr.begin(),arr.end(),"EAST")  - std::count(arr.begin(),arr.end(),"WEST");
      std::cout << y << std::endl;
      std::cout << x << std::endl;
      if(x >= 0) for(int i = 0 ; i <= x; i++)  res.push_back("EAST");
      else for(int i = 0 ; i > x; i--) res.push_back("WEST");
      if(y >= 0) for(int i = 0 ; i <= x; i++) res.push_back("NORTH");
      else for(int i = 0 ; i > x; i--) res.push_back("SOUTH");
      return res;
    };
};

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    std::vector<std::string> arr(n);
    for(int i = 0; i < n; i++){
      std::cin >> arr[i];
    }
    std::vector<std::string> res = DirReduction::dirReduc(arr);
     for(int i = 0; i <res.size() ; i++){
      std::cout << res[i] << ",";
    }
    return 0;
}