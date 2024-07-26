#ifndef BOARD_H
#define BOARD_H

#include <vector>

class Board{
private:
  std::vector<std::vector<char>> board;
public:
  Board();
  ~Board() = default;
  void printBoard();
  void put_in_board(char type, int subRow, int subCol, int newRow, int newCol);
};

#endif 
