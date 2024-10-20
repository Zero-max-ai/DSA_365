#include <iostream>
#include <vector>

class Solution {
  public:
    void zeroZeroes(std::vector<int>& nums) {
      if (nums.size() < 2)
        return;

      size_t i=0, j=1;
      while (i < nums.size() && j < nums.size()) {
        if ( i > j )
          j++;

        else if (nums[i] == 0 &&  nums[j] != 0) {
          nums[i] = nums[j];
          nums[j] = 0;
          i++;  j++;
        }

        else if (nums[i] != 0)
          i++;
        else if (nums[j] ==0)
          j++;
      }

      return;
    }
};

int main() {

  Solution s;
  std::vector<int> v1={0,1,0,3,12}, v2={0};
  s.zeroZeroes(v1);
  s.zeroZeroes(v2);

  for (int n : v1)
    std::cout << n << "- ";
  std::cout << std::endl;
  
  for (int n : v2)
    std::cout << n << "- ";
  std::cout << std::endl;

  return 0;
}
