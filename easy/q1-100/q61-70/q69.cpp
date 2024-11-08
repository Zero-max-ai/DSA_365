#include <iostream>
#include <string>

class Solution {
  public:
    int lengthOfLastWord(std::string s) {
      
      int idx = s.length() - 1, length = 0;

      while (idx >= 0 && s[idx] == ' ')
        idx--;

      while (idx >= 0 && s[idx] != ' ') {
        idx--;
        length++;
      }

      return length;
    }
};

int main() {

  Solution s;
  std::string s1="Hello World", s2="   fly me   to   the moon  ", s3="luffy is still joyboy";
  std::cout << s.lengthOfLastWord(s1) << std::endl;
  std::cout << s.lengthOfLastWord(s2) << std::endl;
  std::cout << s.lengthOfLastWord(s3) << std::endl;

  return 0;
}
