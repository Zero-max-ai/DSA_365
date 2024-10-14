#include <iostream>

/*
// Recursive Approach
class Solution {
  public:
    bool isPowerOfTwo(int n) {
      if (n <= 0) return false;
      if (n == 1) return true;
      if (n % 2 != 0) return false;
      return isPowerOfTwo(n / 2);
    }
};
*/

// Bit Manipulation
class Solution {
  public:
    bool isPowerOfTwo(int n) {
      return n > 0 && (n & (n - 1)) == 0;
    }
};

int main() {
  Solution s;
  std::cout << s.isPowerOfTwo(1) << std::endl;
  std::cout << s.isPowerOfTwo(16) << std::endl;
  std::cout << s.isPowerOfTwo(3) << std::endl;
  std::cout << s.isPowerOfTwo(6) << std::endl;

  return 0;
}
