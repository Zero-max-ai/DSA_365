#include <iostream>
#include <vector>

class Solution {
  public:
    std::string longestDiverseString(int a, int b, int c) {
      std::string str;

      while (a > 0 || b > 0 || c > 0) {
        if (a >= b && a >= c && a > 0) {
          size_t pos = str.rfind("aa");
          if (pos != std::string::npos && (str.length() - pos) == 2) {
            if (b >= c && b > 0) {
              str += "b";
              b--;
            } else if (c >= b && c > 0) {
              str += "c";
              c--;
            } else
              return str;
          } else {
            str += "a";
            a--;
          }
        }
        else if (b >= a && b >= c && b > 0) {
          size_t pos = str.rfind("bb");
          if (pos != std::string::npos && (str.length() - pos) == 2) {
            if (a >= c && a > 0) {
              str += "a";
              a--;
            } else if (c >= a && c > 0) {
              str += "c";
              c--;
            } else
              return str;
          } else {
            str += "b";
            b--;
          }
        }
        else if (c >= a && c >= b && c > 0) {
          size_t pos = str.rfind("cc");
          if (pos != std::string::npos && (str.length() - pos) == 2) {
            if (a >= b && a > 0) {
              str += "a";
              a--;
            } else if (b >= a && b > 0) {
              str += "b";
              b--;
            } else
              return str;
          } else {
            str += "c";
            c--;
          }
        }
      }
    return str;
  }
};

int main() {

  Solution s;
  std::cout << s.longestDiverseString(1,1,7) << std::endl;
  std::cout << s.longestDiverseString(7,1,0) << std::endl;

  return 0;
}
