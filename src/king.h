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

  // Pegando função virtual de Piece
  void movePiece(const int& row, const int& col) override;

public:

  // Construtor
  King(int c, int row, int col);

  // Função que verifica se o movimento é válido
  bool checkIsValidMovement(int& row, int& col, const std::vector<std::vector<Piece*>>& board) override;
};

#endif
