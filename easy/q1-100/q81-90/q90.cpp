#include <iostream>
#include <string>

class Solution {
  public:
    bool detectCapitalUse(std::string word) {
      size_t cap = 0;
      for (char ch : word) {
        if (ch >= 'A' && ch <= 'Z') {
          cap++;
        }
      }
      bool first = word[0] >= 'A' && word[0] <= 'Z' ? true : false;
      return cap == (1 && first) ? true : cap == 0 ? true : cap == word.length() ? true : false;
      // return cap == (1 && first) || cap == 0 || cap == word.length();
    }
};

int main() {
  Solution s;
  std::string s1="USA", s2="FlaG", s3="ffffffffffffffffffffF";
  std::cout << s.detectCapitalUse(s1) << std::endl;
  std::cout << s.detectCapitalUse(s2) << std::endl;
  std::cout << s.detectCapitalUse(s3) << std::endl;
  return 0;
}
