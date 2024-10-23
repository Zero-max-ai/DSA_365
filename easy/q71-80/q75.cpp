#include <iostream>
#include <vector>

class Solution {
  public:
    bool lemonadeChange(std::vector<int>& bills) {
      int five = 0, ten = 0;
      for (int n : bills) {
        if (n == 5)
          five++;
        else if (n == 10 && five >= 1) {
          ten++;
          five--;
        } else if (n == 20 && ten >= 1 && five >= 1) {
          ten--;
          five--;
        } else if (n == 20 && five >= 3)
          five -= 3;
        else
          return false;
      }
      return true;
    }
};

int main() {

  Solution s;
  std::vector<int> v1={5,5,5,10,20},v2={5,5,10,10,20};
  std::cout << s.lemonadeChange(v1) << std::endl;
  std::cout << s.lemonadeChange(v2) << std::endl;

  return 0;
}
