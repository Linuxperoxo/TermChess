//==========================================|
//   FILE: pawn.cc                          |
//   AUTHOR: Linuxperoxo                    |
//   COPYRIGHT: (c) 2024 per Linuxperoxo.   |
//==========================================/

//==========================================================| LIBS

#include <iostream>

//==========================================================| .H

#include "piece.h"
#include "pawn.h"

//==========================================================| MACROS

#define MAX_BOARD 8
#define MIN_BOARD 1

//==========================================================| CLASS FUNCTIONS

Pawn::Pawn(int c, int row, int col) : Piece(c, row, col){
  // Definido a cor da peça
  this->type = ( c == 0 ? 'P' : 'p'); 
}

void Pawn::movePiece(int row, int col){
  // Armazenando posição antiga
  this->old_row = this->row;
  this->old_col = this->col;

  // Armazenando posição atual
  this->row = row;
  this->col = col;
}

bool Pawn::checkIsValidMovement(int row, std::vector<std::vector<Piece*>> board){
  
  // Verificando se o movimento é válido de acordo com o tamanho do board
  if(row > MAX_BOARD || row < MIN_BOARD){
    std::cerr << "Invalid movement!\n";
    return false;
  }

  // Verificando se o peão está voltando uma casa
  if(this->color == 0){
    if(row < this->row){
      std::cerr << "Invalid movement!\n";
      return false;
    }
  } else {
    if(row > this->row){
      std::cerr << "Invalid movement!\n";
      return false;
    }
  }

  // Caso seja válido a peça vai andar 
  movePiece(row, this->col);

  return true;
}
