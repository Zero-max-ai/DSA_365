#include <iostream>
#include <string>

class Solution {
  public:
    long long minimumSteps(std::string s) {
      if (s.length() < 2)
        return 0;

      int zeros=0, ones=s.length()-1;
      int steps=0;
      // time complex = O(n)
      // space complex = O(1)
      while (zeros < ones) {
        if (s[zeros]=='1' && s[ones]=='0') {
          steps+=(ones-zeros);
          ones--;
          zeros++;
        }
        else if (s[zeros]=='1' && s[ones]=='1')
          ones--;
        else
          zeros++;
      }
      
      return steps;
    }
};

int main() {

  Solution s;
  std::string s1="101",s2="100",s3="0111",s4="11000111";
  std::cout << s.minimumSteps(s1) << std::endl;
  std::cout << s.minimumSteps(s2) << std::endl;
  std::cout << s.minimumSteps(s3) << std::endl;
  std::cout << s.minimumSteps(s4) << std::endl;

  return 0;
}
