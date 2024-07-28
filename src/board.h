#ifndef BOARD_H
#define BOARD_H

#include <vector>

#include "piece.h"

#define MAX_BOARD 8

class Board{
private:
  std::vector<std::vector<Piece*>> board;
public:
  Board();
  ~Board();

  Piece* getPiece(int row, int col) const;
  void putPiece(Piece* object);
  std::vector<std::vector<Piece*>> getBoard() const { return board; }
};

#endif
