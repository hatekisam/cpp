#include<cmath>
class DigPow
{
public:
  static int digPow(int n, int p){
    int another;
    while(n != 0){
      another += pow((n %10),p);
      p++;
      n /= 10;
    }
    return another/n;
  };
  
};
