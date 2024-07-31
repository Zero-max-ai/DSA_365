#include <iostream>

int mySqrt(int x) {
	double n = x;
	double itr = 0.00001;
	while((n - x / n) > itr) {
		n = (n + x / n) / 2.0;
	}
	return n;
}

int main() {
	std::cout << mySqrt(4) << std::endl;
	std::cout << mySqrt(8) << std::	endl;
	return 0;
}
