#include <iostream>
#include <vector>

class Solution {
  public:
    int sum;
    int subsetXORSum(std::vector<int>& nums) {
      sum = 0;
      backtrack(0, 0, nums);
      return sum;
    }

    void backtrack(int idx, int currentXOR, std::vector<int>& nums) {
      if (idx == nums.size()) {
        if (currentXOR > 0)
          sum += currentXOR;
        return;
      }
      
      backtrack(idx + 1, currentXOR ^ nums[idx], nums);
      backtrack(idx + 1, currentXOR, nums);

    }
};

int main() {
  Solution s;

  std::vector<int> v1={1,3},v2={5,1,6},v3={3,4,5,6,7,8};
  std::cout << s.subsetXORSum(v1) << std::endl;
  std::cout << s.subsetXORSum(v2) << std::endl;
  std::cout << s.subsetXORSum(v3) << std::endl;

  return 0;
}
