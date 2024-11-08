#include <iostream>
#include <climits>

class Solution {
  public:
    double myPow(double x, int n) {
      if (n == 0) return 1;
      if (x == 0) return 0;

      if (n == INT_MIN) {
        x *= x;
        n /= 2;
      }

      double result = 1.0;
      long long power = abs((long long) n);

      while (power > 0) {
        if (power & 1) {
          result *= x;
        }
        x *= x;
        power >>= 1;
      }

      return n < 0 ? 1/result : result;
    }
};

int main() {
  Solution s;
  std::cout << s.myPow(2.000, 10) << std::endl;
  std::cout << s.myPow(2.100, 3) << std::endl;
  std::cout << s.myPow(2.000, -2) << std::endl;
  return 0;
}
