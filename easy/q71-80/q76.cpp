#include <iostream>
#include <vector>

class Solution {
  public:
    int maximumWealth(std::vector<std::vector<int>>& accounts) {
      int max = 0;
      for (size_t i=0; i<accounts.size(); i++) {
        int sum = 0;
        for (size_t j = 0; j < accounts[i].size(); j++)
          sum += accounts[i][j];

        if (sum > max)
          max = sum;
      }

      return max;
    }
};

int main() {

  Solution s;
  std::vector<std::vector<int>> v1={{1,2,3},{3,2,1}},v2={{1,5},{7,3},{3,5}},v3={{2,8,7},{7,1,3},{1,9,5}};
  std::cout << s.maximumWealth(v1) << std::endl;
  std::cout << s.maximumWealth(v2) << std::endl;
  std::cout << s.maximumWealth(v3) << std::endl;

  return 0;
}
