#include<iostream>

class Solution {
  public:
    int hamingWeight(int n) {
      int counter =0;
      while ( n > 0 ) {
        if ( ( n & 1) == 1)
          counter++;
        n >>= 1;
      }
      return counter;
    }
};

int main() {
  Solution s;
  std::cout << s.hamingWeight(11) << std::endl;
  std::cout << s.hamingWeight(128) << std::endl;
  std::cout << s.hamingWeight(2147483645) << std::endl;

  return 0;
}
