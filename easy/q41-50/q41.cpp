#include <iostream>
#include <string>

class Solution {
  public:
    bool isVowel(char c) {
      return (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U');
    }


    std::string reverseVowels(std::string s) {
      int i=0, j=s.length()-1;
      while (i<j) {
        if (isVowel(s[i]) && isVowel(s[j]) ) {
          char ch = s[i];
          s[i] = s[j];
          s[j] = ch;
          i++; j--;
        }
        else {
          if (!isVowel(s[j]))
            j--;
          if (!isVowel(s[i]))
            i++;
        }
      }

      return s;
    }
};

int main() {
  Solution s;
  std::string w1="IceCreAm", w2="leetcode";
  std::cout << s.reverseVowels(w1) << std::endl;
  std::cout << s.reverseVowels(w2) << std::endl;

  return 0;
}
