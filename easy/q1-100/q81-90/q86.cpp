#include <iostream>

class Solution {
  public:
    bool canWinNim(int n) {
      return n % 4 != 0;
    }
};

int main() {
  Solution s;
  std::cout << s.canWinNim(4) << std::endl;
  std::cout << s.canWinNim(1) << std::endl;
  std::cout << s.canWinNim(2) << std::endl;
  return 0;
}
