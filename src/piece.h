#ifndef PIECE_H
#define PIECE_H

#include <vector>

class Piece{
protected:
  char type;
  int color;
  int row;
  int col;
  int old_row;
  int old_col;

  Piece(int c, int row, int col) : color(c), row(row), col(col), old_row(row), old_col(col){};

  virtual bool checkIsValidMovement(int row, int col, std::vector<std::vector<Piece*>> board) = 0;
  virtual void movePiece(int row, int col) = 0;
public:
  virtual ~Piece() = default;

  char getType() const { return type; }
  int getColor() const { return color; }
  int getRow() const { return row; }
  int getCol() const { return col; }
  int getOldRow() const { return old_row; }
  int getOldCol() const { return old_col; }

};

#endif
