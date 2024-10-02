#include <iostream>
#include <string>
#include <unordered_map>

class Solution {
  public:
    int firstUniqChar(std::string s) { 
    std::unordered_map<char, int> map;

    for (char ch : s)
      map[ch]++;

    for (int i=0; i<s.length(); i++) {
      if (map[s[i]] == 1)
        return i;
    }

    return -1;
  }
};

int main() {
  Solution s;
  std::string first = "leetcode", second = "loveleetcode", third = "aabb";
  std::cout << s.firstUniqChar(first) << std::endl;
  std::cout << s.firstUniqChar(second) << std::endl;
  std::cout << s.firstUniqChar(third) << std::endl;

  return 0;
}
