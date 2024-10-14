#include <iostream>
#include <vector>

std::vector<int> addToArrayForm(std::vector<int>& nums, int k) {

	for (int i=nums.size()-1; i>=0; i--) {
		nums[i] += k;
		k = nums[i] / 10;
		nums[i] %= 10;
	}

	while (k > 0) {
		nums.insert(nums.begin(), k % 10);
		k /= 10;
	}

	return nums;
}

int main() {

	std::vector<int> v1 = {1,2,0,0};
	std::vector<int> r1 = addToArrayForm(v1, 34);
	for (int elem : r1) std::cout << elem << ", ";
	std::cout << std::endl;

	std::vector<int> v2 = {2,7,4};
	std::vector<int> r2 = addToArrayForm(v2, 181);
	for (int elem : r2) std::cout << elem << ", ";
	std::cout << std::endl;

	std::vector<int> v3 = {2,1,5};
	std::vector<int> r3 = addToArrayForm(v3, 806);
	for (int elem : r3) std::cout << elem << ", ";
	std::cout << std::endl;

	return 0;
}
