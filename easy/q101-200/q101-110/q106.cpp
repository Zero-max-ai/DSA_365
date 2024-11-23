#include <iostream>
#include <vector>

class Solution {
  public:
    bool isRectangleOverlap(std::vector<int>& rect1, std::vector<int>& rect2) {
      int x1 = rect1[0], x2 = rect1[2], x3 = rect2[0], x4 = rect2[2];
      int y1 = rect1[1], y2 = rect1[3], y3 = rect2[1], y4 = rect2[3];
      return !(x2 <= x3 || x4 <= x1 || y2 <= y3 || y4 <= y1);
    }
};

int main() {
  Solution s;
  std::vector<int> v1={0,0,2,2}, v2={1,1,3,3}, v3={0,0,1,1}, v4={1,0,2,1}, v5={0,0,1,1}, v6={2,2,3,3};
  
  std::cout << s.isRectangleOverlap(v1,v2) << std::endl;
  std::cout << s.isRectangleOverlap(v3,v4) << std::endl;
  std::cout << s.isRectangleOverlap(v5,v6) << std::endl;

  return 0;
}
