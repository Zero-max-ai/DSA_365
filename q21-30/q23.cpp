#include <iostream>
#include <vector>

std::vector<int> sumZero(int n) {
	
	std::vector<int> result;
	int x = 1;
	if (n % 2 != 0) {
		result.push_back(0);
		n--;
	}
	while (n > 0) {
		result.push_back( 1 * x );
		result.push_back( -1 * x );
		x++;
		n -= 2;
	}

	return result;
}

int main() {
	std::vector<int> ans1 = sumZero(5);
	std::vector<int> ans2 = sumZero(3);
	std::vector<int> ans3 = sumZero(1);

	for (int elem : ans1) std::cout << elem << ", ";
	std::cout << std::endl;
	for (int elem : ans2) std::cout << elem << ", ";
	std::cout << std::endl;
	for (int elem : ans3) std::cout << elem << ", ";
	std::cout << std::endl;

	return 0;
}
