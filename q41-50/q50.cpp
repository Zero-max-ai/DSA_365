#include <iostream>
#include <string>

class Solution {
  public:
    std::string largestGoodInteger(std::string num) {

      if (num.length() < 3)
        return "";
      if (num.length() == 3 && num[0] == num[1] && num[1] == num[2])
        return num;

      int max = 0;
      std::string result = "";
      for (int i=0; i<=num.length()-3; i++) {
        std::string temp = num.substr(i, 3);
        if (temp[0] == temp[1] && temp[1] == temp[2] && std::stoi(temp) >= max) {
          max = stoi(temp);
          result = temp;
        }
      }
      
      return result;
    }
};

int main() {

  Solution s;
  std::string s1="6777133339",s2="2300019",s3="42352338",s4="222",s5="1221000",s6="3200014888";
  std::cout << s.largestGoodInteger(s1) << std::endl;
  std::cout << s.largestGoodInteger(s2) << std::endl;
  std::cout << s.largestGoodInteger(s3) << std::endl;
  std::cout << s.largestGoodInteger(s4) << std::endl;
  std::cout << s.largestGoodInteger(s5) << std::endl;
  std::cout << s.largestGoodInteger(s6) << std::endl;

  return 0;
}
