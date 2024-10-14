#include <iostream>
#include <math.h>

class Solution {
  public:
    int arrangeCoins(int n) {

      long long int k = (-1 + static_cast<long long int>(std::sqrt(1+ 8LL * n)))/ 2;
      return k;
    }
};

int main() {
  
  Solution s;
  std::cout << s.arrangeCoins(5) << std::endl;
  std::cout << s.arrangeCoins(6) << std::endl;
  std::cout << s.arrangeCoins(1804289383) << std::endl;

  return 0;
}
