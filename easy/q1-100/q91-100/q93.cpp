#include <iostream>
#include <cmath>

class Solution {
  public:
    int findComplement(int num) { 
      int mask=0, temp=num;
      while(temp > 0) {
        mask = (mask << 1) | 1;
        temp >>= 1;
      }
      return num ^ mask;
    }
};

int main() {
  Solution s;
  std::cout << s.findComplement(5) << std::endl;
  std::cout << s.findComplement(1) << std::endl;
  std::cout << s.findComplement(2) << std::endl;
  std::cout << s.findComplement(2147483647) << std::endl;
  return 0;
}
