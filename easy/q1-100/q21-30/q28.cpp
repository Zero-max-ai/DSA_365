#include <iostream>

class Solution {
  public:
    bool isPowerOfFour(int n) {
      if ( n < 0 ) return false;
      while ( n % 4 == 0 ) n /= 4;
      return n == 1;
    }
};

int main() {
  Solution s;
  std::cout << "power of 16 is: " << s.isPowerOfFour(16) << std::endl;
  std::cout << "power of 5 is: " << s.isPowerOfFour(5) << std::endl;
}
