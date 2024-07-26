#ifndef PIECE_H
#define PIECE_H

class Piece{
protected:
  char type;
  int color;
  int row;
  int col;
  int old_row;
  int old_col;

  Piece(int c, int init_row, int init_col) : color(c), row(init_row), col(init_col){};
  
  virtual int move(int newRow, int newCol) = 0;

public:
   virtual ~Piece() = default;

  char getType() const { return type; }
  int getRow() const { return row; }
  int getCol() const { return col; }
  int getOldRow() const { return old_row; }
  int getOldCol() const { return old_col; }
};

#endif
