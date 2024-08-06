#include <iostream>
#include <vector>
#include <unordered_set>

bool containsDuplicate(std::vector<int> &nums) {
	std::unordered_set<int> hashset;
	for (int num : nums) {
		if(hashset.find(num) != hashset.end()) {	
			return true;
		}
		hashset.insert(num);
	}
	return false;
}

int main() {
	std::vector<int> v1 = {1,2,3,1};
	std::cout << containsDuplicate(v1) << std::endl;
	return 0;
}
