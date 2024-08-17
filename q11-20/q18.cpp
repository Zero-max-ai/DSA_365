#include <iostream>
#include <vector>

bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
	bool flag = false;
	unsigned int i, j;
	for (i = 0; i < nums.size(); i++) {
		for (j = i + 1; j < nums.size(); j++) {
			if (int(j - i) > k) {
				flag = false;
				break;
			}
			if (int (j - i) <= k && nums[i] == nums[j] ) {
				flag = true;
				break;
			}
		}
		if (flag) return flag;
	}
	return flag;
}

int main() {
	std::vector<int> v1 = {1,2,3,1};
	std::cout << containsNearbyDuplicate(v1, 3) << std::endl;

	std::vector<int> v2 = {1,0,1,1};
	std::cout << containsNearbyDuplicate(v2, 1) << std::endl;

	std::vector<int> v3 = {1,2,3,1,2,3};
	std::cout << containsNearbyDuplicate(v3, 2) << std::endl;

	return 0;
}
