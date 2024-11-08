#include <iostream>
#include <string>

class Solution {
  public:
    bool judgeCircle(std::string s) {
      int i=0, j=0;

      for (char ch : s) {
        if (ch == 'U')
          i++;
        else if (ch == 'D')
          i--;
        else if (ch == 'L')
          j--;
        else
          j++;
      }

      return (i == 0 && j == 0);
    }
};

int main() {

  Solution s;
  std::string s1="UD",s2="LL",s3="LUDRL",s4="LURD";
  std::cout << s.judgeCircle(s1) << std::endl;
  std::cout << s.judgeCircle(s2) << std::endl;
  std::cout << s.judgeCircle(s3) << std::endl;
  std::cout << s.judgeCircle(s4) << std::endl;

  return 0;
}
