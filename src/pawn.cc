#include "pawn.h"
#include "piece.h"

Pawn::Pawn(int c, int init_row, int init_col) : Piece(c, init_row, init_col){
  type = ( c == 0 ? 'P' : 'p' );
  old_col = init_col;
  old_row = init_row;
};

int Pawn::move(int newRow, int newCol){
  old_row = row;
  old_col = col;

  row = newRow;
  col = newCol;

  return 0;
}

int Pawn::getRow() const{
  return row;
}

int Pawn::getCol() const{
  return col;
}

char Pawn::getType() const{
  return type;
}
