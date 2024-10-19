#include <iostream>
#include <string>

class Solution {
  public:
    std::string mergeAlternatively(std::string& s1, std::string& s2) {

      int i = 0, j = 0;
      std::string str = "";

      while ( i < s1.length() && j < s2.length() ) {
        str = str + s1[i] + s2[i];
        i++;  j++;
      }

      if (s1.length() == s2.length())
        return str;

      if (i == s1.length())
        str += s2.substr(j);
      else
        str += s1.substr(i);

      return str;

    }
};

int main() {

  Solution s;
  std::string w1="abc", w2="pqr", w3="ab", w4="pqrs", w5="abcd", w6="pq";
  std::cout << s.mergeAlternatively(w1,w2) << std::endl;
  std::cout << s.mergeAlternatively(w3,w4) << std::endl;
  std::cout << s.mergeAlternatively(w5,w6) << std::endl;

  return 0;
}
