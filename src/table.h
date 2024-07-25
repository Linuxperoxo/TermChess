#ifndef TABLE_H
#define TABLE_H

#include <vector>

class Board{

private:

  std::vector<std::vector<char>> board;

public: 

  Board();

  ~Board() = default;

  void print_board();

};

#endif
