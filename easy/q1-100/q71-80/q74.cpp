#include <iostream>
#include <vector>

class Solution {
  public:
    double average(std::vector<int>& salary) {
      int sum = 0, max = salary[0], min = salary[0];
      for (size_t i=0; i<salary.size(); i++) {
        if (max < salary[i])
          max = salary[i];
        else if (min > salary[i])
          min = salary[i];

        sum += salary[i];
      }

      return (sum - min - max) / double(salary.size()-2);
    }
};

int main() {

  Solution s;
  std::vector<int> v1={4000,3000,1000,2000},v2={1000,2000,3000};
  std::cout << s.average(v1) << std::endl;
  std::cout << s.average(v2) << std::endl;

  return 0;
}
