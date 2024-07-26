#ifndef PAWN_H
#define PAWN_H

#include "piece.h"

class Pawn : public Piece{
private:
public:
  Pawn(int init_row, int init_col);
  ~Pawn() = default;
  
  int move(int row, int col) override;

  char getType() const;
  int getRow() const;
  int getCol() const;
  int getold_row() const;
  int getold_col() const;
};

#endif 
