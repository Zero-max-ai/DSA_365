#include <iostream>

class Solution {
  public:
    int hammingDistance(int x, int y) {
      int xor_val = x ^ y;
      int changes = 0;
      while (xor_val) {
        if (xor_val & 1) {
          changes++;
        }
        xor_val >>= 1;
      }
      return changes;
    }
};

int main() {
  Solution s;
  std::cout << s.hammingDistance(1, 4) << std::endl;
  std::cout << s.hammingDistance(3, 1) << std::endl;
  return 0;
}
