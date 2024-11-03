#include <iostream>
#include <string>

class Solution {
  public:
    bool checkRecord(std::string s) {
      int late = 0, absent = 0;
      for (char ch : s) {
        if (ch == 'A') {
          absent++;
          late = 0;
        }
        else if (ch == 'L') {
          late++;
        }
        else {
          late = 0;
        }

        if (late >= 3 || absent >= 2) {
          return false;
        }
      }
      return true;
    }
};

int main() {
  Solution s;
  std::string s1="PPALLP",s2="PPALLLL",s3="ALLAPPL",s4="LLL",s5="LALL";
  std::cout << s.checkRecord(s1) << std::endl;
  std::cout << s.checkRecord(s2) << std::endl;
  std::cout << s.checkRecord(s3) << std::endl;
  std::cout << s.checkRecord(s4) << std::endl;
  std::cout << s.checkRecord(s5) << std::endl;
  return 0;
}
