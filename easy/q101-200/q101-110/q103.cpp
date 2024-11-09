#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
  public:
    int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
      if (g.empty() || s.empty()) {
        return 0;
      }

      std::sort(g.begin(), g.end());
      std::sort(s.begin(), s.end());
      size_t res = 0, greed=0, satisfy=0;

      while (greed < g.size() && satisfy < s.size()) {
        if (g[greed] <= s[satisfy]) {
          res ++;
          greed++;
        }
        satisfy++;
      }

      return res;
    }
};

int main() {
  Solution s; 

  std::vector<int> v1={1,2,3}, v2={1,1}, v3={1,2}, v4={1,2,3}, v5={10,9,8,7}, v6={5,6,7,8};
  std::cout << s.findContentChildren(v1, v2) << std::endl;
  std::cout << s.findContentChildren(v3, v4) << std::endl;
  std::cout << s.findContentChildren(v5, v6) << std::endl;

  return 0;
}
