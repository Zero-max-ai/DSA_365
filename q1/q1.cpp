#include <iostream>

bool isPalindrome(int num) {
	
	if (num < 0) { return false; }
	if (num == 0) { return true; }

	int sum  = 0;
	int temp = num;
	while (temp >= 10) {
		sum = (sum * 10) + temp % 10;
		temp /= 10;
	}
	sum *= 10;
	sum += temp;
	return num == sum ? true : false;
}

int main() {

	std::cout << isPalindrome(121) << std::endl;
	std::cout << isPalindrome(122) << std::endl;

	return 0;
}
