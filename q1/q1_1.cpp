#include <iostream>

bool isPalindrome(int64_t x) {

	if (x < 0) { return false; }

	int64_t sum = 0;
	int64_t temp = x;

	while (temp != 0) {
		sum = sum * 10 + (temp % 10);
		temp /= 10;
	}

	return x == sum ? true : false;
}

int main() {

	std::cout << isPalindrome(121) << std::endl;
	std::cout << isPalindrome(122) << std::endl;

	return 0;
}
