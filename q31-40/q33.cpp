#include <iostream>

class Solution {
  public:
    int addDigits(int num) {
      if (num <= 9) return num;
      int sum = 0;
      while (num) {
        sum += num % 10;
        num /= 10;
      }
      std::cout << sum << std::endl;
      return addDigits(sum);
    }
};

int main () {
  Solution s;
  s.addDigits(38);
  s.addDigits(0);
}