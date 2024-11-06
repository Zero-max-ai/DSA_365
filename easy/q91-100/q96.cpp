#include <iostream>
#include <vector>

class Solution {
  public:
    char nextGreatestLetter(std::vector<char>& letters, char target) {
      for (char ch : letters) {
        if ( ch > target) {
          return ch;
        }
      }
      return letters[0]; 
    }
};

int main() {
  Solution s;
  std::vector<char> c1={'c','f','j'},c2={'x','x','y','y'};
  std::cout << s.nextGreatestLetter(c1,'a') << std::endl;
  std::cout << s.nextGreatestLetter(c1,'c') << std::endl;
  std::cout << s.nextGreatestLetter(c2,'z') << std::endl;
  return 0;
}
