#include <iostream>
#include <string>
#include <climits>

class Solution {
  public:
    int myAtoi(std::string s) {
      int num = 0;
      size_t index = 0;
      bool flag = true;

      // skipping all the starting white spaces
      while(index < s.length() && s[index] == ' ') {
        index++;
      }

      // getting the sign value
      if (s[index] == '-') {
        flag = false;
        index++;
      }

      // convert the number
      while (index < s.length() && s[index] >= '0' && s[index] <= '9') {
        int digit = s[index] - '0';
        if (flag && (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > 7))) {
          return INT_MAX;
        }

       if (!flag && (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > 8))) {
         return INT_MIN;
       }

       num = num * 10 + digit;
       index++;
      }

      return flag ? num : -num;
    }
};

int main() {
  Solution s;
  std::string s1="42", s2="   -042", s3="1337c0d3", s4="0-1", s5="words and 987", s6="-2147483648";
  std::cout << s.myAtoi(s1) << std::endl;
  std::cout << s.myAtoi(s2) << std::endl;
  std::cout << s.myAtoi(s3) << std::endl;
  std::cout << s.myAtoi(s4) << std::endl;
  std::cout << s.myAtoi(s5) << std::endl;
  std::cout << s.myAtoi(s6) << std::endl;
  return 0;
}
