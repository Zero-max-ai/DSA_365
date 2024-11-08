#include <iostream>
#include <vector>

class Solution {
  public:
    int diagonalSum(std::vector<std::vector<int>>& mat) {
      int sum = 0;
      int length = mat.size();

      for (int i=0; i<length; i++) {
        sum += mat[i][i];
        sum += mat[i][length - i - 1];
      }
      if (length % 2 == 1)
        sum -= mat[length/2][length/2];

      return sum;
    }
};

int main() {

  Solution s;
  std::vector<std::vector<int>> m1={{1,2,3},{4,5,6},{7,8,9}}, m2(4,std::vector<int>(4,1)),m3={{5}};
  std::cout << s.diagonalSum(m1) << std::endl;
  std::cout << s.diagonalSum(m2) << std::endl;
  std::cout << s.diagonalSum(m3) << std::endl;

  return 0;
}
