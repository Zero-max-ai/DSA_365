#include <iostream>
#include <string>
#include <unordered_map>

class Solution {
  public:
    char findTheDifference(std::string s, std::string t) {
    
      std::unordered_map<char, int> map;
      for (int ch : s)
        map[ch]++;

      for (int ch : t) {
        map[ch]--;
        if (map[ch] < 0)
          return ch;          
      }

      return ' ';
    }
};

int main() {
  
  Solution s;

  std::string s1="abcd", s2="abcde", s3="", s4="y";
  std::cout << s.findTheDifference(s1,s2) << std::endl;
  std::cout << s.findTheDifference(s3,s4) << std::endl;

  return 0;
}
