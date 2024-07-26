#include "pawn.h"


Pawn::Pawn(int init_row, int init_col) : Piece(init_row, init_col){
  type = 'P';
}

int Pawn::move(int newRow, int newCol) {

  old_row = row;
  old_col = col;

  row = --newRow;
  col = --newCol;

  return 0;
}

char Pawn::getType() const{
  return type;
}

int Pawn::getRow() const{
  return row;
}

int Pawn::getCol() const{
  return col;
}

int Pawn::getold_row() const{
  return old_row;
}

int Pawn::getold_col() const{
  return old_col;
}
