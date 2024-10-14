#include <iostream>
#include <vector>
#include <string>

std::vector<int> shortestToChar(std::string s, char c) {
	std::vector<int> result;
	std::size_t i, j;

	for (i=0; i<s.length()-1; i++) {
		std::vector<int> looper;
		for (j=0; j<s.length()-1; j++) {

		}
	}

	return result;
}

int main() {
	std::vector<int> r1 = shortestToChar("loveleetcode", 'e');
	for(int num : r1)	std::cout << num << ", ";
	return 0;
}
