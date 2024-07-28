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
  void movePiece(int row, int col) override; 
public:

  // Construtor
  Pawn(int c, int row, int col);

  // Função que verifica se o movimento é válido
  bool checkIsValidMovement(int row, int col, std::vector<std::vector<Piece*>>& board);
};

#endif
