#ifndef PIECE_H
#define PIECE_H

class Piece{
protected:
  char type;
  int row;
  int col;
  int old_row;
  int old_col;

  Piece(int init_row, int init_col);
  virtual ~Piece() = default;
  
  virtual int move(int newRow, int newCol) = 0;
};

#endif
