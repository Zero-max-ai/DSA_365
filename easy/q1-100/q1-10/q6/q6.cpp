#include <iostream>
#include <string>

void makeStringValid(std::string &str) {

	int temp = 0;
	for (char ch : str) {
		if (ch >= 'A' && ch <= 'Z') {
			ch = ch + 32;
		}
		if ((ch >= 'a' && ch <= 'z') || (ch >= 48 && ch <= 57)) {
			str[temp++] = ch;
		}	
	}
	str.resize(temp);
}

bool isPalindrome(std::string str) {
	makeStringValid(str);
	
/*	bool flag = false;
	for(int i=0, j=newStr.length()-1; i<newStr.length()-1 || j>=0; i++, j--) {
		if (newStr[i] != newStr[j]) {
			flag = true; // not palindrome
			break;
		}
	}
	if (flag) {
		std::cout << "not palindrome" << std::endl;
		return false;
	}
	std::cout << "is palindrome" << std::endl;
	
	return true;
*/

	int i=0, j=str.length()-1;
	while (i < j) {
		if (str[i] != str[j])
			return false;
		i++; j--;
	}
	return true;

}

int main() {
	std::string str = "A man, a plan, a canal: Panama";
	std::cout << isPalindrome(str) << std::endl;
	std::string str1 = "race a car";
	std::cout << isPalindrome(str1) << std::endl;
	std::string str2 = " ";
	std::cout << isPalindrome(str2) << std::endl;
	std::string str3 = "OP";
	std::cout << isPalindrome(str3) << std::endl;

	return 0;
}
