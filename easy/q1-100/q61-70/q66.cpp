#include <iostream>
#include <string>
#include <unordered_map>

class Solution {
  public:
    bool isAnagram(std::string s, std::string t) {

      /*
      std::unordered_map<char, int> map;
      for (char ch : s)
        map[ch]++;

      for (char ch : t)
        map[ch]++;

      for (const auto & pair : map) {
        if (pair.second % 2 != 0)
          return false;
      }
      */

      if (s.length() != t.length())
        return false;

      int chars[26] = {0};
      for (std::size_t i=0; i<s.length(); i++) {
        chars[s[i] - 'a']++;
        chars[t[i] - 'a']--;
      }

      for (int n : chars) {
        if (n != 0)
          return false;
      }
      return true;
    }
};

int main() {

  Solution s;
  std::string s1="anagram",s2="nagaram",s3="rat",s4="car";
  std::cout << s.isAnagram(s1,s2) << std::endl;
  std::cout << s.isAnagram(s3,s4) << std::endl;

  return 0;
}
