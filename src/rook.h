//==========================================|
//   FILE: rook.h                           |
//   AUTHOR: Linuxperoxo                    |
//   COPYRIGHT: (c) 2024 per Linuxperoxo.   |
//==========================================/

#ifndef ROOK_H
#define ROOK_H

//==========================================================| .H

#include "piece.h"

//==========================================================| CLASS DEFINITION

class Rook : public Piece{
private:

  // Primeiro movimento da peça
  bool first_move;

  // Pegando função virtual pura da class Piece
  void movePiece(const unsigned int& row, const unsigned int& col) override;

public:

  // Construtor
  Rook(int c, unsigned int row, unsigned int col);

  // Função que verifica se o movimento é válido
  bool checkIsValidMovement(unsigned int& row, unsigned int& col, const std::vector<std::vector<Piece*>>& board) override;
};

#endif
