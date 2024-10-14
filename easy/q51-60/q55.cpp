#include <iostream>
#include <vector>
#include <cmath>
// #include <unordered_map>

class Solution {
  public:
    std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
      /*
      std::vector<int> vec;
      std::unordered_map<int, int> map;

      for (int i=0; i<nums.size(); i++)
        map[nums[i]]++;

      for (int i=1; i<=nums.size(); i++) {
        if (map.find(i) == map.end())
          vec.push_back(i);
      }

      return vec;
      */

      std::vector<int> vec;

      for (int i=0; i<nums.size(); i++) {
        int index = std::abs(nums[i]) - 1;
        if (nums[index] > 0)
          nums[index] = -nums[index];
      }

      for (int i=0; i<nums.size(); i++) {
        if (nums[i] > 0)
          vec.push_back(i + 1);
      }

      return vec;
    }
};

int main() {
  Solution s;
  std::vector<int> v1={4,3,2,7,8,2,3,1},v2={1,1};
  std::vector<int> r1=s.findDisappearedNumbers(v1), r2=s.findDisappearedNumbers(v2);

  for (int n : r1)  std::cout << n << std::endl;
  for (int n : r2)  std::cout << n << std::endl;

  return 0;
}
