#include <iostream>
#include <vector>
#include <string>

std::vector<int> findWordsContaining (std::vector<std::string>& words, char x) {
	std::vector<int> s;
	for(int i=0; i<words.size(); i++) {
		bool flag = false;
		for (int j=0; j<words[i].length(); j++) {
			if (words[i][j] == x) {
				flag = true;
				break;
			}
		}
		if (flag)
			s.push_back(i);
	}
	return s;
}

int main () {

	std::vector<std::string> v1 = {"leet", "code"};
	std::vector<std::string> v2 = {"abc", "bcd", "aaaa", "cbc"};
	std::vector<int> r1 = findWordsContaining(v1, 'e');
	std::vector<int> r2 = findWordsContaining(v2, 'a');
	for (int num : r1) std::cout << num;
	std::cout << std::endl;
	for (int num :r2)	std::cout << num;
	std::cout << std::endl;

	return 0;
}
