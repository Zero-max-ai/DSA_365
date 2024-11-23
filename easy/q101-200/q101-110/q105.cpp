#include <iostream>
#include <string>
#include <unordered_map>
#include <sstream>

class Solution {
  public:
    bool wordPattern(std::string pattern, std::string s) {
      std::unordered_map<char, std::string> map;
      int index = 0;
      std::stringstream ss (s);
      std::string word;

      while (ss >> word) {
        std::cout << word << " - " << pattern[index] << std::endl;
        index ++;
      }
      index =0;

      while (ss >> word) { 
        if (map.find(pattern[index]) != map.end()) {
          map[pattern[index]] = word;
        }
        else {
          if (map[pattern[index]] != word) {
            return false;
          }
        }
        index ++;
      }

      return true;
    }
};


int main() {
  Solution s;
  std::string s1="dog cat cat dog";
  std::string p1="abba";
  std::cout << s.wordPattern(p1, s1) << std::endl;
  return 0;
}
