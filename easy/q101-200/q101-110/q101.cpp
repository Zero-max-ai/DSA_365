#include <iostream>
#include <string>

class Solution {
  public:
    std::string convertToBase7(int num) {
      if (num == 0) {
        return std::to_string(0);
      }
      
      int sign = abs(num);
      std::string res = "";
      while (sign > 0) {
        int rem = sign % 7;
        res = std::to_string(rem) + res;
        sign /= 7;
        // std::cout << rem << " - " << res << " - " << sign << std::endl;
      }

      return num < 0 ? "-"+res : res;
    }
};

int main() {
  Solution s;
  std::cout << s.convertToBase7(100) << std::endl;
  std::cout << s.convertToBase7(-7) << std::endl;
  return 0;
}
