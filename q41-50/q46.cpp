#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
  bool areAlmostEqual(std::string s1, std::string s2) {
    if (s1 == s2)
      return true;
    if (s1.length() != s2.length())
      return false;
    
    std::vector<int> vec;
    for (int i=0; i<s1.length(); i++) {
      if(s1[i] != s2[i])
        vec.push_back(i);
    }

    if (vec.size() != 2)
      return false;


    std::swap(s1[vec[0]], s1[vec[1]]);
    return s1 == s2;
  }
};

int main() {
  Solution s;
  std::string s1="bank", s2="kanb", s3="attack", s4="defend", s5="kelb", s6="kelb";
  std::cout << s.areAlmostEqual(s1, s2) << std::endl;
  std::cout << s.areAlmostEqual(s3, s4) << std::endl;
  std::cout << s.areAlmostEqual(s5, s6) << std::endl;
}
