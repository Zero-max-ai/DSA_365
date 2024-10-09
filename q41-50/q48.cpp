#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
  public:
    int getMinDistance(std::vector<int>& nums, int target, int start) {
      
      int result = 1000;
      std::unordered_map<int, int> map;
      for (int i=0; i<nums.size(); i++) {
        if (nums[i] == target)
          map.insert({i, target});
      }

      for(const auto &pair : map) {
        int absolute = abs( pair.first - start );
        if (absolute < result)
          result = absolute;
      }

      return result;
    }
};

int main() {
  Solution s;
  std::vector<int> n1={1,2,3,4,5}, n2={1}, n3={1,1,1,1,1,1,1,1,1,1}, n4={7, 8, 3, 7, 9, 7};
  std::cout << s.getMinDistance(n1,5,3) << std::endl;
  std::cout << s.getMinDistance(n2,1,0) << std::endl;
  std::cout << s.getMinDistance(n3,1,0) << std::endl;
  std::cout << s.getMinDistance(n4,7,2) << std::endl;

  return 0;
}
