#include <iostream>
#include <vector>

bool checkStraightLine(std::vector<std::vector<int>>& coordinates) {

	// float m = 0, c = 0;
	// formula of straight line => y=mx+c
	// x and y cooridnates
	// m = slope and c = height
	
	int x1 = coordinates[0][0], y1 = coordinates[0][1];
	int x2 = coordinates[1][0], y2 = coordinates[1][1];
	
	// m = (y2-y1) / (x2-x1);
	// c = y1-(m*x1);
	
	/*
	for (const auto& pair : coordinates) {
		int rightSide = ( m * pair[0] ) + c;
		std::cout << pair[1] << "-" << rightSide << std::endl;
		if (pair[1] != rightSide) {
			return false;
		}
	}
	*/

	for (unsigned int i=2; i<coordinates.size(); i++) {
		int x3 = coordinates[i][0], y3 = coordinates[i][1];

		if ( (y3 - y1) * (x2- x1) != (y2 - y1) * (x3 - x1) )
			return false;
	}

	return true;
}

int main() {

	std::vector<std::vector<int>> points1 = {{1,2}, {2,3}, {3,4}, {4,5}, {5,6}, {6,7}};
	std::cout << checkStraightLine(points1) << std::endl;

	std::vector<std::vector<int>> points2 = {{1,1}, {2,2}, {3,4}, {4,5}, {5,6}, {7,7}};
	std::cout << checkStraightLine(points2) << std::endl;

	return 0;
}
