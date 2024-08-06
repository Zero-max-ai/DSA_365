#include <iostream>
#include <string>
#include <unordered_map>

bool isAnagram(std::string s, std::string t) {
	if (s.length() != t.length()) return false;
	
	std::unordered_map<char, int> sUmap;
	std::unordered_map<char, int> tUmap;
	for (int i=0; i<s.length(); i++) {
		sUmap[s[i]]++;
		tUmap[t[i]]++;
	}
	
	if (sUmap == tUmap)	return true;
	return false;

	/*
	for (const auto &pair : sUmap)
		std::cout << pair.first << ", " <<  pair.second << std::endl;

	for (const auto &pair : tUmap)
		std::cout << pair.first << ", " << pair.second << std::endl;
	*/
}

int main() {
	std::cout << isAnagram("anagram", "nagaram") << std::endl;
	std::cout << isAnagram("rat", "car") << std::endl;
}
