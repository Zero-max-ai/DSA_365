#include <iostream>

class Solution {
  public:
    int numWaterBottles(int numBottles, int numExchange) {
      int drink = numBottles;
      while (numBottles >= numExchange) {
        numBottles -= numExchange;
        drink++;
        numBottles++;
      }
      return drink;
    }
};

int main() {
  Solution s;
  std::cout << s.numWaterBottles(9, 3) << std::endl;
  std::cout << s.numWaterBottles(15, 4) << std::endl;
}
