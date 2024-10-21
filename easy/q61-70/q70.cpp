#include <iostream>
#include <vector>

class Solution {
  public:
    bool isMonotonic(std::vector<int>& nums) {
      if (nums.size() < 2)
        return true;

      bool inc = false, dsc = false;

      for (size_t i=0; i<nums.size()-1; i++) {
        if (nums[i] < nums[i+1])
          inc = true;
        else if (nums[i] > nums[i+1])
          dsc = true;

        if (inc && dsc)
          return false;
      }

      return true;
    }
};

int main() {

  Solution s;
  std::vector<int> v1={1,2,2,3},v2={6,5,4,4},v3={1,3,2};
  std::cout << s.isMonotonic(v1) << std::endl;
  std::cout << s.isMonotonic(v2) << std::endl;
  std::cout << s.isMonotonic(v3) << std::endl;

  return 0;
}
