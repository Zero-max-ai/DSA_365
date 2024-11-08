#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
  public:
    int majorityElements(std::vector<int>& nums) {
      /*
      int freq=0, n = 0;
      std::unordered_map<int, int> map;
      for (int no : nums)  map[no]++;

      for (const auto &pair : map)  std::cout << pair.first << " - " << pair.second << std::endl;

      for (const auto & pair : map) {
        if (pair.second > freq) {
          freq = pair.second;
          n = pair.first;
        }
      }
      return n;
      */

      int cand=0, count=0;
      for (int num : nums) {
        if (count == 0)
          cand = num;
        count += (num == cand) ? 1 : -1;
      }
      return cand;
    }
};

int main() {

  Solution s;
  std::vector<int> v1={3,2,3},v2={2,2,1,1,1,2,2},v3={6,5,5};
  std::cout << s.majorityElements(v1) << std::endl;
  std::cout << s.majorityElements(v2) << std::endl;
  std::cout << s.majorityElements(v3) << std::endl;

  return 0;
}
