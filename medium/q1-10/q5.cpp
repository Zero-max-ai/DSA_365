#include <iostream>
#include <string>
#include <algorithm>

class Solution {
  public:
    int maximumSwap(int num) {
      std::string str = std::to_string(num);

      int maxIdx=str.length()-1, leftIdx=-1, rightIdx=-1;
      for (int i=str.length()-2; i>=0; --i ) {
        if (str[i] > str[maxIdx])
          maxIdx = i;
        else if (str[i] < str[maxIdx]) {
          leftIdx = i;
          rightIdx = maxIdx;
        }
      }

      if (leftIdx != -1)
        std::swap(str[leftIdx], str[rightIdx]);

      return std::stoi(str);
    }
};

int main() {
  Solution s;

  std::cout << s.maximumSwap(2736) << std::endl;
  std::cout << s.maximumSwap(9973) << std::endl;

  return 0;
}
