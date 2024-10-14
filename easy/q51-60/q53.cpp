#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
  public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
      std::sort(nums1.begin(), nums1.end());
      std::sort(nums2.begin(), nums2.end());

      std::vector<int> res;
      int p1=0,p2=0;

      while (p1 < nums1.size() && p2 < nums2.size()) {
        if (nums1[p1] == nums2[p2]) {
          res.push_back(nums1[p1]);
          p1++; p2++;
        }
        else if (nums1[p1] < nums2[p2])
          p1++;
        else
          p2++;
      }

      return res;
    }
};

int main() {
  Solution s;
  std::vector<int> v1={1,2,2,1},v2={2,2},v3={4,9,5},v4={9,4,9,8,4};
  std::vector<int> r1=s.intersection(v1,v2), r2=s.intersection(v3,v4);

  for (int n : r1)  std::cout << n << std::endl;
  for (int n : r2)  std::cout << n << std::endl;

  return 0;
}
