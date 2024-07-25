#ifndef PIECE_H
#define PIECE_H

class Piece{

protected:

  const char color;

  int row;
  int col;

  virtual void setNewLocale(int& newRow, int& newCol) = 0;
  virtual void move(int& newRow, int& newCol) = 0;

public:

  Piece(char color, int row, int col) : color(color), row(row), col(col){};
  ~Piece() = default;

};

#endif
