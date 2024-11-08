#include <iostream>
#include <string>

class Solution {
  public:
    bool squareIsWhite(std::string coordinate) {
      int value = (coordinate[0] - 'a') + coordinate[1];

      return value % 2 == 0;
    }
};

int main() {
  Solution s;
  std::string s1="a1",s2="h3",s3="c7";
  std::cout << s.squareIsWhite(s1) << std::endl;
  std::cout << s.squareIsWhite(s2) << std::endl;
  std::cout << s.squareIsWhite(s3) << std::endl;

  return 0;
}
