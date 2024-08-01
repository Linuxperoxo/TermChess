//==========================================|
//   FILE: king.h                           |
//   AUTHOR: Linuxperoxo                    |
//   COPYRIGHT: (c) 2024 per Linuxperoxo.   |
//==========================================/

#ifndef KING_H
#define KING_H

//==========================================================| LIBS

#include "piece.h"

//==========================================================| CLASS DEFINITION

class King : public Piece{
private:

  // Primeiro movimento da peça
  bool first_move;

  // Pegando função virtual pura da class Piece
  void movePiece(const unsigned int& row, const unsigned int& col) override;

public:

  // Construtor
  King(int c, unsigned int row, unsigned int col);

  // Função que verifica se o movimento é válido
  bool checkIsValidMovement(unsigned int& row, unsigned int& col, const std::vector<std::vector<Piece*>>& board) override;
};

#endif
