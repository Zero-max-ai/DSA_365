#include <iostream>
#include <vector>
#include <queue> // for using priority queue
#include <cmath> // for using ceil function

class Solution {
  public:
    long long maxKelements(std::vector<int>& nums, int k) {
      long long int score = 0;
      std::priority_queue<int> pq;

      // added the elements in queue
      for (int num : nums)
        pq.push(num);

      // it's gonna take KlogN
      while ( k > 0 ) {
        int val = pq.top();
        score += val;
        val = std::ceil(val / 3.0);
        pq.pop();
        pq.push(val);

        k--;
      }

      return score;
    }
};

int main() {
  Solution s;
  std::vector<int> v1={10,10,10,10,10},v2={1,10,3,3,3};
  std::cout << s.maxKelements(v1,5) << std::endl;
  std::cout << s.maxKelements(v2,3) << std::endl;

  return 0;
}
