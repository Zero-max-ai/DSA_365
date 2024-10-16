#include <iostream>
#include <string>

class Solution {
  public:
    bool checkTwoChessboards(std::string c1, std::string c2) {
      
      int sq1 = int(c1[0] - 'a') + c1[1];
      int sq2 = int(c2[0] - 'a') + c2[1];

      return (sq1 % 2 == 0) == (sq2 % 2 == 0);
    }
};

int main() {
  Solution s;
  std::string c1="a1",c2="c3",c3="h3";
  std::cout << s.checkTwoChessboards(c1,c2) << std::endl;
  std::cout << s.checkTwoChessboards(c1,c3) << std::endl;

  return 0;
}
