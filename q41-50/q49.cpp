#include <iostream>
// #include <regex>
#include <string>
#include <vector>

class Solution {
  public:
    int numOfStrings(std::vector<std::string>& patterns, std::string word) {
      /*
       * this is with regex but its slow than actuall substring
      int counter=0; // 56 ms :dead
      for (const auto& subStr : patterns) {
        std::regex pattern(subStr);
        if (std::regex_search(word, pattern))
          counter++;
      }
      return counter;
      */

      // with basic substring // 0ms
      int counter=0;
      for (const std::string& pattern : patterns) {
        if (word.find(pattern) != std::string::npos)
          counter ++;
      }

      return counter;
    }
};

int main() {
  Solution s;
  std::string s1="abc", s2="aaaaabbbbb", s3="ab";
  std::vector<std::string> v1={"a","abc","bc","d"}, v2={"a","b","c"}, v3={"a","a","a"};

  std::cout << s.numOfStrings(v1, s1) << std::endl;
  std::cout << s.numOfStrings(v2, s2) << std::endl;
  std::cout << s.numOfStrings(v3, s3) << std::endl;

  return 0;
}
