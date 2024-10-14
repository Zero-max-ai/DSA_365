#include <iostream>
#include <string>

class Solution {
  public:
    bool isSubsequence(std::string s, std::string t) {
      if (s.length() > t.length())
        return false;

      int i=0;
      for (char ch : t) {
        if (s[i] == ch)
          i++;
      }
      return i == s.length();
    }
};

int main() {
  Solution s;
  std::string a="abc", b="ahbgdc", c="axc", d="acb", e="ahbgdc";
  std::string wut="uuuuuuuuuuuuuuuuuubcd", Owut="bcd";
  std::cout << s.isSubsequence(a, b) << std::endl;
  std::cout << s.isSubsequence(c, b) << std::endl;
  std::cout << s.isSubsequence(d, e) << std::endl;
  std::cout << s.isSubsequence(Owut, wut) << std::endl;
}
