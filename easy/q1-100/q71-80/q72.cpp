#include <iostream>
#include <vector>
#include <string>

class Solution {
  public:
    void printGrid(std::vector<std::vector<char>>& grid) {
      for (size_t i=0; i<grid.size(); i++) {
        for (size_t j=0; j<grid[i].size(); j++) {
          if (grid[i][j] == 'O')
            std::cout << 'O' << '-';
          else if (grid[i][j] == 'X')
            std::cout << 'X' << '-';
          else
            std::cout << ' ' << '-';
        }
        std::cout << std::endl;
      }
    }


    std::string isValid(std::vector<std::vector<char>>& grid) {
     
      // diagonal checking
      if ((grid[0][0] == 'X' && grid[1][1] == 'X' && grid[2][2] == 'X') || (grid[0][2] == 'X' && grid[1][1] == 'X' && grid[2][0] == 'X'))
        return "A";  // Player A wins
      
      if ((grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O') || (grid[0][2] == 'O' && grid[1][1] == 'O' && grid[2][0] == 'O'))
        return "B";  // Player B wins

      // check all rows & cols
      for (size_t i=0; i<grid.size(); i++) {
        int row=0, col=0;
        for (size_t j=0; j<grid[i].size(); j++) {
          if (grid[i][j] == 'X')
            row ++;
          else if (grid[i][j] == 'O')
            row--;

          if (grid[j][i] == 'X')
            col++;
          else if (grid[j][i] == 'O')
            col--;
        }

        if (row == 3 || col == 3)
          return "A";
        else if (row == -3 || col == -3)
          return "B";
      }
      return "";
    }
    
    std::string tictactoe(std::vector<std::vector<int>>& moves) {
      std::vector<std::vector<char>> grid(3, std::vector<char>(3, ' '));
      
      int steps = 0;
      for (size_t i=0; i<moves.size(); i++) {
        if (i % 2 == 0) {
          grid[moves[i][0]][moves[i][1]] = 'X';
          steps++;
        }
        else {
          grid[moves[i][0]][moves[i][1]] = 'O';
          steps++;
        }
        if (steps >= 5) {
          std::string res = isValid(grid);
          if (res != "")
            return res;
        }

        if (steps == 9)
          return "Draw";
      }
      return "Draw";
    }
};

int main() {

  Solution s;
  std::vector<std::vector<int>> v1={{0,0},{2,0},{1,1},{2,1},{2,2}},v2={{0,0},{1,1},{0,1},{0,2},{1,0},{2,0}},v3={{0,0},{1,1},{2,0},{1,0},{1,2},{2,1},{0,1},{0,2},{2,2}};
  std::cout << s.tictactoe(v1) << std::endl;
  std::cout << s.tictactoe(v2) << std::endl;
  std::cout << s.tictactoe(v3) << std::endl;

  return 0;
}
