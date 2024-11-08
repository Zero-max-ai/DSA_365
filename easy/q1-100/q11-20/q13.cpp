#include <iostream>
#include <vector>

int missingNumber(std::vector<int> &nums) {
	int val = nums.size() * (nums.size() + 1) / 2;
	for (int num : nums)
		val -= num;
	return val;
}

int main() {
	std::vector<int> v1 = {3,0,1};
	std::vector<int> v2 = {0,1};
	std::vector<int> v3 = {9,6,4,2,3,5,7,0,1};

	std::cout << missingNumber(v1) << std::endl;
	std::cout << missingNumber(v2) << std::endl;
	std::cout << missingNumber(v3) << std::endl;
}
