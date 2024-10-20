#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
  public:
    bool canMakeArithmeticProgression(std::vector<int>& arr) {
      std::sort(arr.begin(), arr.end());
      int diff = arr[1] - arr[0];
      for (int i=arr.size() - 1; i>0; i--) {
        if (arr[i] - arr[i-1] != diff)
          return false;
      }

      return true;
    }
};

int main() {

  Solution s;
  std::vector<int> v1={3,5,1}, v2={1,2,4};
  std::cout << s.canMakeArithmeticProgression(v1) << std::endl;
  std::cout << s.canMakeArithmeticProgression(v2) << std::endl;

  return 0;
}
