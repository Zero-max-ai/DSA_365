#include <iostream>
#include <string>

class Solution {
  public:
    bool rotateString(std::string s, std::string goal) {
      
      if (s.length() != goal.length()) {
        return false;
      }

      return (s+s).find(goal) != std::string::npos;
    }
};

int main() {
  Solution s;
  std::string s1="abcde", goal1="cdeab", goal2="abced";
  std::string s2="defdefdefabcabc", goal3="defdefabcabcdef", s3="aa", goal4="a";
  std::cout << s.rotateString(s1, goal1) << std::endl;
  std::cout << s.rotateString(s1, goal2) << std::endl;
  std::cout << s.rotateString(s2,goal3) << std::endl;
  std::cout << s.rotateString(s3, goal4) << std::endl;
  return 0;
}
