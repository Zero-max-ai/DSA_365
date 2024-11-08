#include <iostream>
#include <vector>

int singleNumber(std::vector<int> &nums) {
	int result = 0;
	for (auto x: nums)
		result ^= x;
	return result;
}

int main () {
	std::vector<int> v1 = {2,2,1};
	std::vector<int> v2 = {4,1,2,1,2};
	std::vector<int> v3 = {1};
	std::vector<int> v4 = {1,1,4,4,6,6,8,8,9};

	std::cout << singleNumber(v1) << " - " << singleNumber(v2) << " - " << singleNumber(v3) << " - " <<  singleNumber(v4) << std::endl;
	return 0;
}
