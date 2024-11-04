#include <iostream>
#include <vector>

class Solution {
  public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
      int i = m -1;
      int j = n -1;
      int k = m +n -1;

      while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
          nums1[k--] = nums1[i--];
        } else {
          nums1[k--] = nums2[j--];
        }
      }

      while (j >= 0) {
        nums1[k--] = nums2[j--];
      }

      for (int n : nums1)
        std::cout << n << " - ";
      std::cout << std::endl;
    }
};

int main() {
  Solution s;
  std::vector<int> v1={1,2,3,0,0,0}, v2={2,5,6}, v3={1}, v4={0};
  s.merge(v1,3,v2,3);
  s.merge(v3,1,v4,0);
  s.merge(v4,0,v3,1);
  return 0;
}
