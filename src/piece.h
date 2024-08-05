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

  // Var que define a cor
  int color;

  // Posição atual no eixo Y
  unsigned int row;

  // Posição atual no eixo X
  unsigned int col;

  // Posição Y anterior a atual
  unsigned int old_row;

  // Posição X anterior a atual
  unsigned int old_col;

  // Construtor 
  Piece(unsigned int c, unsigned int row, unsigned int col) : color(c), row(row), col(col), old_row(row), old_col(col){};

  // Função virtual pura 
  virtual void movePiece(const unsigned int& row, const unsigned int& col) = 0;

public:
  // Destrutor virtual
  virtual ~Piece() = default;

  // Função virtual pura
  virtual bool checkIsValidMovement(unsigned int& row, unsigned int& col, const std::vector<std::vector<Piece*>>& board) = 0;
  
  // Funções get para encapsular a classe 
  char getType() const { return type; }
  int getColor() const { return color; }
  unsigned int getRow() const { return row; }
  unsigned int getCol() const { return col; }
  unsigned int getOldRow() const { return old_row; }
  unsigned int getOldCol() const { return old_col; }
};

#endif
