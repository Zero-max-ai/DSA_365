#include <iostream>
#include <unordered_set>

class Solution {
  public:
    bool isHappy(int n) {
      std::unordered_set<int> checked;
      
      while (n!=1 && checked.find(n) == checked.end()) {
        checked.insert(n);

        int sum = 0;
        while(n) {
          int rem = n % 10;
          sum += rem * rem;
          n /= 10;
        }
        std::cout << sum << std::endl;
        n = sum;
      }
      return n == 1;
    }
};

int main() {
  Solution s;
  s.isHappy(19);
  s.isHappy(2);
}
