//==========================================|
//   FILE: pawn.h                           |
//   AUTHOR: Linuxperoxo                    |
//   COPYRIGHT: (c) 2024 per Linuxperoxo.   |
//==========================================/

#ifndef PAWN_H
#define PAWN_H

//==========================================================| .H

#include "piece.h"

//==========================================================| CLASS DEFINITION

class Pawn : public Piece{
private:  
  // Primeiro movimento da peça
  bool first_move;

  // Pegando função virtual de Piece
  void movePiece(const unsigned int& row, const unsigned int& col) override; 

public:
  // Construtor
  Pawn(int c, unsigned int row, unsigned int col);

  // Função que verifica se o movimento é válido
  bool checkIsValidMovement(unsigned int& row, unsigned int& col, const std::vector<std::vector<Piece*>>& board) override;
};

#endif
