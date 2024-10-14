#include <iostream>
#include <vector>
#include <cmath>

bool isBoomerang(std::vector<std::vector<int>>& points) {

	if (points.size() != 3) return false;

	int x1 = points[0][0], y1 = points[0][1], x2 = points[1][0], y2 = points[1][1], x3 = points[2][0], y3 = points[2][1];

	if ((x1 == x2 && y1 == y2) || (x2 == x3 && y2 == y3) || (x3 == x1 && y3 == y1)) return false;
	
	int area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2) ;
	return std::abs(area) != 0;

}

int main() {

	std::vector<std::vector<int>> v1 = {{1,2}, {2,3}, {3,2}};
	std::cout << isBoomerang(v1) << std::endl;
	
	std::vector<std::vector<int>> v2 = {{1,1}, {2,2}, {3,3}};
	std::cout << isBoomerang(v2) << std::endl;
	return 0;
}
