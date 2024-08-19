#include <iostream>
#include <vector>

std::vector<int> addToArrayForm(std::vector<int>& nums, int k) {

	int sum = 0;
	for (int elem : nums) sum = ( sum * 10 ) + elem;

	sum += k;
	nums.clear();
	while(sum > 0) {
		nums.insert(nums.begin(), sum % 10);
		sum /= 10;
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
