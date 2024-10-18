#include <iostream>
#include <vector>

class Solution {
  public:
    int countMaxOrSubsets(std::vector<int>& nums) {
      maxOR = 0;
      count = 0;

      for (int n : nums)
        maxOR |= n;

      backtrack(0, 0, nums);
      return count;
    }

  private:
    int maxOR = 0;
    int count = 0;

    void backtrack(int idx, int currentOR, std::vector<int>& nums) {
      if (idx == nums.size()) {
        if (currentOR == maxOR)
          count++;
        return;
      }

      backtrack(idx + 1, currentOR | nums[idx], nums);
      backtrack(idx + 1, currentOR, nums);
    }
};

int main() {

  Solution s;
  std::vector<int> v1={3,1}, v2={2,2,2}, v3={3,2,1,5};

  std::cout << s.countMaxOrSubsets(v1) << std::endl;
  std::cout << s.countMaxOrSubsets(v2) << std::endl;
  std::cout << s.countMaxOrSubsets(v3) << std::endl;

  return 0;
}
