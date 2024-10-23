#include <iostream>

class Solution {
  public:
    int countOdds(int low, int high) {
      return (high + 1) / 2 - low / 2;
    }
};

int main() {
  Solution s;

  std::cout << s.countOdds(3, 7) << std::endl;
  std::cout << s.countOdds(8, 10) << std::endl;

  return 0;
}
