//==========================================|
//   FILE: piece.h                          |
//   AUTHOR: Linuxperoxo                    |
//   COPYRIGHT: (c) 2024 per Linuxperoxo.   |
//==========================================/

#ifndef PIECE_H
#define PIECE_H

//==========================================================| LIBS

#include <vector>

//==========================================================| CLASS DEFINITION

class Piece{
protected:

  // Inicial da peça 
  char type;

  // Cor 
  int color;

  // Posição atual no eixo Y
  int row;

  // Posição atual no eixo X
  int col;

  // Posição Y anterior a atual
  int old_row;

  // Posição X anterior a atual
  int old_col;

  // Construtor 
  Piece(int c, int row, int col) : color(c), row(row), col(col), old_row(row), old_col(col){};

  // Função virtual pura 
  virtual void movePiece(int row, int col) = 0;
public:

  // Destrutor virtual
  virtual ~Piece() = default;

  // Funções get para encapsular a classe 
  char getType() const { return type; }
  int getColor() const { return color; }
  int getRow() const { return row; }
  int getCol() const { return col; }
  int getOldRow() const { return old_row; }
  int getOldCol() const { return old_col; }

};

#endif
