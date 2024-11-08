#include <iostream>

class Solution {
  public:
    bool isPerfectSquare(int n) {
      // making long long integers because of too much value generate after the multiplications.
      long long int i=1, halfway=n/2;
      while (i <= halfway) {
        long long int mid = i + (halfway - i) / 2;
        long long square = mid * mid;
        if (square == n)
          return true;
        else if (square > n)
          halfway = mid - 1;
        else
          i = mid + 1;
      }

      return i*i == n;
    }
};

int main() {
  Solution s;
  std::cout << s.isPerfectSquare(16) << std::endl;
  std::cout << s.isPerfectSquare(14) << std::endl;
  std::cout << s.isPerfectSquare(256) << std::endl;
  std::cout << s.isPerfectSquare(255) << std::endl;
  std::cout << s.isPerfectSquare(2147395600) << std::endl;
}
