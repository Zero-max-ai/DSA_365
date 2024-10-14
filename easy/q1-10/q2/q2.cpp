#include <iostream>
#include <vector>

std::vector<int> plusOne(std::vector<int>& digits) {
	int n = digits.size();
  for (int i= n-1; i>=0; i--) {
  	if (i==n-1)
    	digits[i]++;
    if (digits[i] == 10) {
    	digits[i] = 0;
      	if (i!=0) {
        	digits[i-1]++;
        } else {
          digits.push_back(0);
          digits[i] = 1;
        }
    }
	}
	return digits;
}


int main() {
	std::vector<int> v1 = {1,2,3};
	std::vector<int> r1 = plusOne(v1);
	std::vector<int> v2 = {9};
	std::vector<int> r2 = plusOne(v2);

	for (int num : r1) std::cout << num << std::endl;
	for (int num : r2) std::cout << num << std::endl;

}
