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
  // Pegando função virtual de Piece
  void movePiece(int row, int col) override; 
public:
  // Construtor
  Pawn(int c, int row, int col);

  // Destrutor
  ~Pawn() = default;

  // Função que verifica se o movimento é válido
  bool checkIsValidMovement(int row, std::vector<std::vector<Piece*>> board);
};

#endif
