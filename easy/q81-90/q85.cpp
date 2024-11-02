#include <iostream>
#include <vector>
#include <climits>

class Solution {
  public:
    int maxProfit(std::vector<int>& prices) {
      int min = INT_MAX, max = 0;
      for (int price : prices) {
        if (min > price) {
          min = price;
        }

        int profit = price - min;

        if (profit > max) {
          max = profit;
        }
      }
      return max;
    }
};

int main() {
  Solution s;
  std::vector<int> v1={7,1,5,3,6,4}, v2={7,6,4,3,1};
  std::cout << s.maxProfit(v1) << std::endl;
  std::cout << s.maxProfit(v2) << std::endl;

  return 0;
}
