#include <iostream>
#include <vector>

// i fucking ran the same code on leetcode & it runs under 2ms!
// ain't no fuck what's issue here!

class Solution {
  public:
    std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>>& image) {
      for (auto& row : image) {
        int left=0, right=row.size()-1;
        while (left <= right) {
          if (left == right) {
            row[left] ^= 1;
          } else {
            int temp = row[left]^1;
            row[left] = row[right] ^ 1;
            row[right] = temp;
          }
          left ++;
          right --;
        }
      }
      /*
      for (size_t i=0; i<image.size(); i++) {
        int j=0, k=image[i].size()-1;
        while (j<=k) {
          if (j == k) {
            image[i][k] ^=1;
            break;
          }
          else if (image[i][j] == image[i][k]) {
            image[i][j] ^= 1;
            image[i][k] ^= 1;
          }
          j++; k--;
        }
      }
      */ // don't know but its giving wrong output! claude helps :)
      return image;
    }
};

int main() {
  Solution s;
  std::vector<std::vector<int>> v1={{1,1,0}, {1,0,1}, {0,0,1}},v2={{1,1,0,0}, {1,0,0,1}, {0,1,1,1}, {1,0,1,0}};
  std::vector<std::vector<int>> r1=s.flipAndInvertImage(v1), r2=s.flipAndInvertImage(v2);
  
  for (size_t i = 0; i<r1.size(); i++) {
    for (size_t j = 0; j<r1[i].size(); j++) {
      std::cout << r1[i][j] << " - ";
    }
    std::cout << "\n";
  }
  
  for (size_t i=0; i<r2.size(); i++) {
    for (size_t j=0; j<r2[i].size(); j++) {
      std::cout << r1[i][j] << " - ";
    }
    std::cout << "\n";
  }
  return 0;
}


/*
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto& row : image) {
            int i = 0, j = row.size() - 1;
            while (i <= j) {
                if (i == j) {
                    row[i] ^= 1;
                } else {
                    int temp = row[i] ^ 1;
                    row[i] = row[j] ^ 1;
                    row[j] = temp;
                }
                i++;
                j--;
            }
        }
        return image;
    }
};

my leetcode answer
*/
