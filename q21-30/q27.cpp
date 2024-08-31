#include <iostream>
#include <vector>

void moveZero(std::vector<int>& nums) {

	int size = nums.size(), i=0, j=1;
	while (j < size) {

		if (nums[i] != 0) i++ ;
		if (nums[i] == 0 && nums[j] != 0) {
			nums[i] = nums[j];
			nums[j] = 0;
		}
		j++;
	}

	for (size_t i=0; i<nums.size(); i++) {
		std::cout << nums[i] << std::endl;
	}
}


int main() {
	std::vector<int> v1 = {0,1,0,3,12}, v2 = {0};
	moveZero(v1);
	moveZero(v2);
	return 0;
}
