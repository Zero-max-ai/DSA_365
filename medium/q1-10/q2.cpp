#include <iostream>
#include <cstdint> // for using uint32_t
#include <climits> // for using INT_MAX || INT_MIN

class Solution {
  public:
    int reverse(int x) {
      bool sign = (x > 0);
      uint32_t n = 0;
      x = std::abs(x);
      // takes O(n) for time
      // takes O(1) for spcae
      while (x > 0) {
        uint32_t rem = x % 10;
        
        // validate if the 32 bit is overflowing or not?
        if (n > (INT_MAX / 10) || (n == (INT_MAX / 10) && rem > INT_MAX % 10))
          return 0;
        
        n = rem + (n * 10);
        x /= 10;
      }

      if (!sign)
        n = -n;

      return n;
    }
};

int main() {
  Solution s;
  std::cout << s.reverse(123) << std::endl;
  std::cout << s.reverse(-123) << std::endl;
  std::cout << s.reverse(120) << std::endl;
  std::cout << s.reverse(1534236469) << std::endl;

  return 0;
}
