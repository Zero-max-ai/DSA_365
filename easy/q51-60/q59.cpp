#include <iostream>
#include <vector>

class Solution {
  public:
    int arraySign(std::vector<int>& nums) {
      int neg = 0;
      for (int n : nums) {
        if ( n == 0)
          return 0;
        else if ( n < 0)
          neg++;
      }

      return signFunc(neg);
    }

    int signFunc(int x) {
        return ((x % 2 == 0) ? 1 : -1);
    }
};

int main() {
  Solution s;
  std::vector<int> v1={-1,-2,-3,-4,3,2,1},v2={1,5,0,2,-3},v3={-1,1,-1,1,-1};
  std::cout << s.arraySign(v1) << std::endl;
  std::cout << s.arraySign(v2) << std::endl;
  std::cout << s.arraySign(v3) << std::endl;

  return 0;
}
