//==========================================|
//   FILE: bishop.h                         |
//   AUTHOR: Linuxperoxo                    |
//   COPYRIGHT: (c) 2024 per Linuxperoxo.   |
//==========================================/

#ifndef BISHOP_H
#define BISHOP_H

//==========================================================| .H

#include "piece.h"

//==========================================================| CLASS DEFINITION

class Bishop : public Piece{
private:  
  // Pegando função virtual pura da class Piece
  void movePiece(const unsigned int& row, const unsigned int& col) override;

public:
  // Construtor
  Bishop(char c, unsigned int row, unsigned int col);
  
  // Função que verifica se o movimento é válido
  bool checkIsValidMovement(unsigned int& row, unsigned int& col, std::vector<std::vector<Piece*>>& board);
}; 

#endif
