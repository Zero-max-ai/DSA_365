#include <iostream>
#include <string>

std::string toLowerCase(std::string s) {
	std::string val = "";
	for (char ch : s) {
		if (ch >= 'A' && ch <= 'Z') {
			ch = ch + 32;
		}
		val += ch;
	}
	return val;
}

int main() {
	std::cout << toLowerCase("LOVELY") << std::endl;
}
