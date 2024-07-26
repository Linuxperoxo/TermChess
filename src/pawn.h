#ifndef PAWN_H
#define PAWN_H

#include "piece.h"

class Pawn : public Piece{
public:
  Pawn(int c, int init_row, int init_col);
  ~Pawn() = default;
  
  int move(int newRow, int newCol) override;
  int getRow() const;
  int getCol() const;
  char getType() const;

};

#endif
