#include <iostream>
#include <string>

class Solution {
  public:
    std::string convertToTitle(int colNum) {
      std::string val = "";
      
      /*
       * my code was fucked up so took help from chatgpt
      if (colNum <= 26)
        return val += char(64 + colNum);
      int rem = colNum % 26;
      int quo = colNum / 26;
      if (quo > 26)
        val += convertToTitle(quo);
      else
        val += char(64 + quo);
      val += char(64 + rem);
      return val;
      */

      while (colNum > 0) {
        colNum--;

        int rem = colNum % 26;
        val = char (65 + rem) + val;
        colNum /= 26;
      }
      return val;
    }
};

int main() {
  Solution s;
  std::cout << s.convertToTitle(1) << std::endl;
  std::cout << s.convertToTitle(28) << std::endl;
  std::cout << s.convertToTitle(701) << std::endl;
  std::cout << s.convertToTitle(986) << std::endl;
  std::cout << s.convertToTitle(52) << std::endl;

  return 0;
}
