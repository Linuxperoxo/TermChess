#ifndef BOARD_H
#define BOARD_H

#include <vector>

#include "piece.h"

class Board{
private:
  std::vector<std::vector<Piece*>> board;
public:
  Board();
  ~Board();

  void printBoard();
  void placeObject(Piece* object);
};

#endif
