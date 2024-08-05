//==========================================|
//   FILE: bishop.cc                        |
//   AUTHOR: Linuxperoxo                    |
//   COPYRIGHT: (c) 2024 per Linuxperoxo.   |
//==========================================/

//==========================================================| LIBS

#include <iostream>

//==========================================================| .H

#include "bishop.h"
#include "piece.h"

//==========================================================| CLASS FUNCTIONS

Bishop::Bishop(char c, unsigned int row, unsigned int col) : Piece(c, row, col){
  type = (c == 0 ? 'P' : 'p');
}

void Bishop::movePiece(const unsigned int& row, const unsigned int& col){
  this->old_row = this->row;
  this->old_col = this->col;

  this->row = row;
  this->col = col;
}

bool Bishop::checkIsValidMovement(unsigned int& row, unsigned int& col, std::vector<std::vector<Piece*>>& board){
  --row;
  --col;


  std::cout << "\n Invalid movement!\n";
  return false;
}
