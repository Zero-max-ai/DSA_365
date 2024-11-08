#include <iostream>
#include <string>
#include <bits/stdc++.h> // for using stringstream

class Solution {
  public:
    int countSegments(std::string s) {
      std::stringstream ss(s);
      std::string word;
      int counter=0;
      while (ss >> word) {
        counter++;
      }
      return counter;
    }
};

int main() {
  Solution s;
  std::string s1="Hello, my name is John", s2="Hello";
  std::cout << s.countSegments(s1) << std::endl;
  std::cout << s.countSegments(s2) << std::endl;
  return 0;
}
