#include <iostream>
#include <vector>
#include <string>

class Solution {
  public:
    int countSeniors(std::vector<std::string>& details) {
      int count = 0;

      for (std::string str : details) {
        if (((str[11] - '0') * 10 + (str[12] - '0') ) > 60)
          count++;
      }

      return count;
    }
};

int main() {
  Solution s;

  std::vector<std::string> v1={"7868190130M7522","5303914400F9211","9273338290F4010"}, v2={"1313579440F2036","2921522980M5644"};
  std::cout << s.countSeniors(v1) << std::endl;
  std::cout << s.countSeniors(v2) << std::endl;

  return 0;
}
