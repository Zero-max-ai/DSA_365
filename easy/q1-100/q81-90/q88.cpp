#include <iostream>
#include <vector>

class Solution {
  public:
    int findPoisonedDuration(std::vector<int>& timeSeries, int duration) {
      int totalSeconds = 0;
      for (size_t i=1; i<timeSeries.size(); i++) {
        if (timeSeries[i] - timeSeries[i-1] > duration) {
          totalSeconds += duration;
        } else {
          totalSeconds += timeSeries[i] - timeSeries[i-1];
        }
      }
      totalSeconds += duration;
      return totalSeconds;
    }
};

int main() {
  Solution s;
  std::vector<int> v1={1,4}, v2={1,2};
  std::cout << s.findPoisonedDuration(v1,2) << std::endl;
  std::cout << s.findPoisonedDuration(v2,2) << std::endl;
  return 0;
}
