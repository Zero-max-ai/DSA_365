#include <iostream>
#include <vector>

class Solution {
  public:
    int findMaxConsecutiveOnes(std::vector<int>& nums) {
    int max = 0, current = 0;
      for (int n : nums) {
        if (n == 1) {
          current++;
        } else if (n == 0 && max < current) {
          max = current;
          current = 0;
        } else if (n == 0 && max >= current) {
          current = 0;
        }
      }
      return max > current ? max : current;
    }
};

int main() {
  Solution s;
  std::vector<int> v1={1,1,0,1,1,1}, v2={1,0,1,1,0,1};
  std::cout << s.findMaxConsecutiveOnes(v1) << std::endl;
  std::cout << s.findMaxConsecutiveOnes(v2) << std::endl;
  return 0;
}
