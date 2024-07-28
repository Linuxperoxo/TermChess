#ifndef PAWN_H
#define PAWN_H

#include "piece.h"

class Pawn : public Piece{
private:
  void movePiece(int row, int col) override; 
public:
  Pawn(int c, int row, int col);

  bool checkIsValidMovement(int row, int col, std::vector<std::vector<Piece*>> board) override;
};

#endif
