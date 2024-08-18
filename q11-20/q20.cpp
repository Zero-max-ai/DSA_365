#include <iostream>
#include <vector>

int averageValue(std::vector<int>& nums) {

	int sum = 0, freq=0;
	for (const int& num : nums) {
		if (num % 6 == 0) {
			sum += num;
			freq++;
		}
	}

	if (freq == 0) return 0;
	return sum / freq;
}

int main() {

	std::vector<int> v1 = {1,3,6,10,12,15};
	std::cout << averageValue(v1) << std::endl;

	std::vector<int> v2 = {1, 2, 4, 7, 10};
	std::cout << averageValue(v2) << std::endl;

	return 0;
}
