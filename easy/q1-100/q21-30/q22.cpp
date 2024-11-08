#include <iostream>
#include <vector>

void display(const std::vector<std::vector<int>>& nums) {
	for (const auto & row : nums) {
		for (int elem : row) {
			std::cout << elem << " ";
		}
		std::cout << std::endl;
	}
}

int maxCount(int m, int n, std::vector<std::vector<int>>& nums) {

	std::vector<std::vector<int>> result(m, std::vector<int>(n, 0));
	int max = 0, freq = 0;
	for (unsigned int i=0; i<nums.size(); i++) {
		int col1 = nums[i][0], col2 = nums[i][1];
		for (int k=0; k < col1; k++) {
			for (int l = 0; l < col2; l++) {
				result[k][l] += 1;
			}
		}
	}

	for (const auto& row: result) {
		for (int elem : row) {
			if (max == elem) freq++;
			else if (max < elem) {
				max = elem;
				freq = 1;
			}
		}
	}
	std::cout << max << " - "<< freq << std::endl;	
	
	std::cout << "second" << std::endl;
	display(result);
	

	return 0;
}


int maxCountReal(int m, int n, std::vector<std::vector<int>>& nums) {

	int minRow = m, minCol = n;
	for (const auto &pair : nums) {
		minRow = std::min(minRow, pair[0]);
		minCol = std::min(minCol, pair[1]);
	}

	return minRow * minCol;

}

int main() {

	std::vector<std::vector<int>> v1 = {{2,2}, {3,3}};
	std::cout << maxCount(3,3,v1) << std::endl;

	std::vector<std::vector<int>> v2 = {{2,2}, {3,3}, {3,3}, {3,3}, {2,2}, {3,3}, {3,3}, {3,3}, {2,2}, {3,3}, {3,3}, {3,3}};
	std::cout << maxCount(3,3, v2) << std::endl;

	std::vector<std::vector<int>> v3 = {};
	std::cout << maxCount(3, 3, v3) << std::endl;
	
	std::cout << maxCountReal(3,3,v1) << std::endl;
	std::cout << maxCountReal(3,3, v2) << std::endl;
	std::cout << maxCountReal(3, 3, v3) << std::endl;
	return 0;
}
