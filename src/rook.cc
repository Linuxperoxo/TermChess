//==========================================|
//   FILE: rook.cc                          |
//   AUTHOR: Linuxperoxo                    |
//   COPYRIGHT: (c) 2024 per Linuxperoxo.   |
//==========================================/

#include <iostream>

//==========================================================| .H

#include "rook.h"
#include "piece.h"

//==========================================================| CLASS FUNCTIONS

Rook::Rook(int c, unsigned int row, unsigned int col) : Piece(c, row, col){
  // Definindo a letra da peça com base na cor
  type = (c == 0 ? 'R' : 'r');
  // Falando que é o primeiro movimento de peça
  first_move = true;
}

void Rook::movePiece(const unsigned int& row, const unsigned int& col){
  // Armazenando posição antiga
  this->old_row = this->row;
  this->old_col = this->col;

  // Armazenando posição atual
  this->row = row;
  this->col = col;
}

bool Rook::checkIsValidMovement(unsigned int& row, unsigned int& col, const std::vector<std::vector<Piece*>>& board){
  
  // Ajustando para indexação baseada em 0
  --row;
  --col;

  if(row != this->row && col == this->col){
    movePiece(row, col);
    return true;
  } 

  if(row == this->row && col != this->col){
    movePiece(row, col);
    return true;
  }
  std::cerr << "Invalid movement!\n";
  return false;
}
