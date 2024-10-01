#include <iostream>
#include <vector>

class Solution {
  public:
    std::vector<int> countBits(int n) {
      std::vector<int> vec;
      
      for (int i=0; i<=n; i++) {
        int calc = 0;
        int a = i;
        while (a > 0) {
          if ((a & 1) == 1) calc++;
          a >>= 1;
        }
        vec.push_back(calc);
      }
      return vec;
    }
};

int main() {
  Solution s;
  std::vector<int> op = s.countBits(2), po = s.countBits(5);
  for (int n : op) std::cout << n << " - ";
  std::cout << std::endl;
  for (int n : po) std::cout << n << " - ";
  std::cout << std::endl;

  return 0;
}
