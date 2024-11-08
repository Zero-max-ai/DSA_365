#include <iostream>

class Solution {
  public:
    bool isPowerOfThree(int n) {
      if (n <= 0) return false;
      while (n % 3 == 0) n /= 3;
      return n == 1;
    }
};

int main() {

 Solution s;
 std::cout << s.isPowerOfThree(27) << std::endl;
 std::cout << s.isPowerOfThree(0) << std::endl;

  return 0;
}
