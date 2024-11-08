#include <iostream>
#include <string>

class Solution {
  public:
    int titleToNumber(std::string colTitle) {
      
      int sum=0;
      for (char ch : colTitle) {
        int ascii = ch - 'A' + 1;
        sum = sum * 26 + ascii;
      }
      return sum;

    }
};

int main() {
  Solution s;
  std::string s1="A", s2="AB", s3="ZY";
  std::cout << s.titleToNumber(s1) << std::endl;
  std::cout << s.titleToNumber(s2) << std::endl;
  std::cout << s.titleToNumber(s3) << std::endl;

  return 0;
}
