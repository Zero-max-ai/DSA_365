#include <iostream>
#include <vector>
#include <string>

class Solution {
  public:
    std::vector<std::string> summaryRanges(std::vector<int>& nums) {
      std::vector<std::string> vec;
      if(nums.empty()) {
        return vec;
      }

      int a = nums[0], b=nums[0]; // setting initial values
      for (size_t i=1; i<nums.size(); i++) {
        if (nums[i-1]+1 == nums[i]) {
          b = nums[i];
        } else {
          if (a != b) {
            vec.push_back(std::to_string(a));
          }
          else {
            vec.push_back(std::to_string(a) + "->" + std::to_string(b));
          }
          a = nums[i];
          b = nums[i];
        }
      }
      if (a == b) {
        vec.push_back(std::to_string(a));
      } else {
        vec.push_back(std::to_string(a) + "->" + std::to_string(b));
      }

      return vec;
    }
};

int main() {
  Solution s;
  std::vector<int> v1={0,1,2,4,5,7}, v2={0,2,3,4,6,8,9};
  std::vector<std::string> r1=s.summaryRanges(v1), r2=s.summaryRanges(v2);
  for (std::string str : r1)
    std::cout << str << " - ";
  std::cout << "\n";

  for(std::string str : r2)
    std::cout << str << " - ";
  std::cout << "\n";
  return 0;
}
