#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
  public:
    int distributeCandies(std::vector<int>& candyType) {
      sort(candyType.begin(), candyType.end());
      int unique = 1, limit = candyType.size() / 2;

      for (size_t i=1; i<candyType.size(); i++) {
        if (candyType[i] - candyType[i-1] >= 1 && unique < limit) {
          unique++;
        }
        if (unique == limit) {
          return unique;
        }
      }

      return unique;
    }
};

int main() {
  Solution s;
  std::vector<int> v1={1,1,2,2,3,3}, v2={1,1,2,3}, v3={6,6,6,6}, v4={1,11}, v5={1000, 1, 1, 1}, v6={100000,0,100000,0,100000,0,100000,0,100000,0,100000,0};
  std::cout << s.distributeCandies(v1) << std::endl;
  std::cout << s.distributeCandies(v2) << std::endl;
  std::cout << s.distributeCandies(v3) << std::endl;
  std::cout << s.distributeCandies(v4) << std::endl;
  std::cout << s.distributeCandies(v5) << std::endl;
  std::cout << s.distributeCandies(v6) << std::endl;
  return 0;
}
