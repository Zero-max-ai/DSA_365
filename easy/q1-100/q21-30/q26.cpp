#include <iostream>
#include <vector>

int gcd (int n, int m) {
	if (m == 0) return n;
	return gcd(m , n % m);
}

int findGCD(std::vector<int>& nums) {
	int smallest = nums[0], largest = nums[0];
	for (int elems : nums) {
		if (elems > largest) largest = elems;
		if (elems < smallest) smallest = elems;
	}
	return gcd(smallest, largest);
}

int main() {

	std::vector<int> v1 = {2,5,6,9,10} , v2 = {7,5,6,8,3}, v3 = {3,3};
	std::cout << findGCD(v1) << " - " << findGCD(v2) << " - " << findGCD(v3) << std::endl;

	return 0;
}
