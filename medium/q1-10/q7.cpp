#include <iostream>

class Solution {
public:
  char findKthBit(int n, int k) {
    int length = (1 << n) - 1;
    return getKthBit(n,k, length);
  }

  char getKthBit(int n, int k, int length) {

    if (n == 1)
      return '0';

    int mid = (length + 1) / 2;
    if ( mid == k )
      return '1';
    else if (mid > k)
      return getKthBit(n-1, k, mid - 1);
    else {
      char result = getKthBit(n-1, length - k + 1, length - mid);
      return (result == '0') ? '1' : '0';
    }
  }
};

int main() {

  Solution s;
  std::cout << s.findKthBit(3,1) << std::endl;
  std::cout << s.findKthBit(4,11) << std::endl;
  std::cout << s.findKthBit(2,3) << std::endl;
  std::cout << s.findKthBit(3,5) << std::endl;

  return 0;
}
