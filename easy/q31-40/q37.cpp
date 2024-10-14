#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
  public:
    int findLucky(std::vector<int> & arr) {
      std::unordered_map<int, int> map;
      for (int i=0; i<arr.size(); i++)
        map[arr[i]]++;
      
      int calc = -1;
      for (const auto &pair : map) {
        if (pair.first == pair.second && calc < pair.first) calc = pair.first;
      }

      return calc;
    }
};

int main() {
  Solution s;
  std::vector<int> n1 = {2,2,3,4}, n2 = {1,2,2,3,3,3}, n3 = {2,2,2,3,3};

  std::cout << s.findLucky(n1) << std::endl;
  std::cout << s.findLucky(n2) << std::endl;
  std::cout << s.findLucky(n3) << std::endl;

  return 0;
}
