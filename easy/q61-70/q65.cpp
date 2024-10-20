#include <iostream>
#include <string>

class Solution {
  public:
    int strStr(std::string haystack, std::string needle) {
      int index = haystack.find(needle);
      if (index != std::string::npos)
          return index;
      return -1;
    }
};

int main() {

  Solution s;
  std::string s1="sadbutsad",s2="sad", s3="leetcode",s4="leeto";
  std::cout << s.strStr(s1,s2) << std::endl;
  std::cout << s.strStr(s3,s4) << std::endl;

  return 0;
}
