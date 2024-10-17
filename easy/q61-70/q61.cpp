#include <iostream>

class Solution {
  public:
    int recursion(int x, int target) {
      if (x == target)
        return 1;
      else if (x > target)
        return 0;

      return recursion(x+1, target) + recursion(x+2, target);
    }

    int climbStairs(int n) {
      return recursion(0, n);
    }
};

int main() {
  Solution s;

  std::cout << s.climbStairs(2) << std::endl;
  std::cout << s.climbStairs(3) << std::endl;
  std::cout << s.climbStairs(6) << std::endl;
  std::cout << s.climbStairs(44) << std::endl;

  return 0;
}
