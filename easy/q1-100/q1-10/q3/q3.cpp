#include <iostream>
#include <string>

std::string addBinary(std::string a, std::string b) {
	std::string result ="";
	int carry = 0;
	int i = a.length() - 1;
	int j = b.length() - 1;

	while (i>=0 || j>=0 || carry) {
		int sum = carry;

		if (i >= 0) {
			sum +=a[i] - '0';
			i--;
		}
		if (j >= 0) {
			sum += b[j] - '0';
			j--;
		}

		result = std::to_string(sum % 2) + result;
		carry = sum / 2;
	}

	return result;
}

int main() {
	std::string a = "11", b="1";
	std::cout << addBinary(a, b) << std::endl;

	std:: string c = "1010", d = "1011";
	std::cout << addBinary(c, d) << std::endl;
}
