#include <iostream>
#include <vector>
#include <unordered_set>

class Solution {
  public:
    std::vector<int> intersection(std::vector<int>& num1, std::vector<int>& num2) {

      std::unordered_set<int> set(num1.begin(), num1.end());
      std::vector<int> vec;

      for (int n : num2) {
        if(set.find(n) != set.end()) {
          vec.push_back(n);
          set.erase(n);
        } 
      }      

      return vec;
    }
};

int main() {
  Solution s;
  std::vector<int> v1={1,2,2,1},v2={4,9,5},v3={2,2},v4={9,4,9,8,4};
  std::vector<int> r1=s.intersection(v1,v3), r2=s.intersection(v2,v4);
  
  for(int n : r1) std::cout << n << std::endl;
  for(int n : r2) std::cout << n << std::endl;

  return 0;
}
