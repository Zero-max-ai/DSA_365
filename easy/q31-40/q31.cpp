#include <iostream>

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
// leetcode is having this above function, so nothing will be there in main function as well

class Solution {
  public:
    int firstBadVersion(int n) {
      if (n == 1) return n;
      int start = 1, end = n;
      while (start < end) {
        int mid = start + (end - start) / 2;
        if (isBadVersion(mid))
          end = mid;
        else
          start = mid + 1;
      }
      return start;
    }
};

int main() {}
