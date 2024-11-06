#include <iostream>
#include <vector>

class Solution {
  public:
    bool isValid (int n) {
      int temp = n;
      while (n > 0) {
        int num = n % 10 ;
        if (num == 0 || temp % num != 0) {
          return false;
        }
        n /= 10;
      }
      return true;
    }
    
    std::vector<int> selfDividingNumbers(int left, int right) {
      std::vector<int> vec;
      for (int i = left; i<=right; i++) {
        if (i <=9 ) {
          vec.push_back(i);
        } else {
          if(isValid(i)) {
            vec.push_back(i);
          }
        }
      }
      return vec;
    }
};

int main() {
  Solution s;
  std::vector<int> v1=s.selfDividingNumbers(1,22), v2=s.selfDividingNumbers(47, 85);
  for (int n : v1)
    std::cout << n << " - ";
  std::cout << "\n";

  for (int n : v2)
    std::cout << n << " - ";
  std::cout << "\n";

  return 0;
}
