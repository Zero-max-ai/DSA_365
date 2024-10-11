#include <iostream>
#include <unordered_map>
#include <string>

class Solution {
  public:
    bool isIsomorphic(std::string s, std::string t) {
      std::unordered_map<char, char> s_map;
      std::unordered_map<char, char> t_map;

      if (s.length() != t.length())
        return false;

      for(int i=0;i<s.length();i++){
        if (s_map.find(s[i]) == s_map.end())
          s_map[s[i]] = t[i];
        else if (s_map[s[i]] != t[i])
          return false;
      
        if (t_map.find(t[i]) == t_map.end())
          t_map[t[i]] = s[i];
        else if (t_map[t[i]] != s[i])
          return false;
      }

      return true;
    }
};

int main() {
  Solution s;
  std::string s1="egg",s2="foo",s3="paper",s4="eggs",s5="badc";
  std::string t1="add",t2="bar",t3="title",t4="does",t5="baba";

  std::cout << s.isIsomorphic(s1,t1) << std::endl;
  std::cout << s.isIsomorphic(s2,t2) << std::endl;
  std::cout << s.isIsomorphic(s3,t3) << std::endl;
  std::cout << s.isIsomorphic(s4,t4) << std::endl;
  std::cout << s.isIsomorphic(s5,t5) << std::endl;


  return 0;
}
