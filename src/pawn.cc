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

#define MAX_BOARD 7
#define MIN_BOARD 0

//==========================================================| CLASS FUNCTIONS

Pawn::Pawn(int c, int row, int col) : Piece(c, row, col){
  // Definido a cor da peça
  this->type = ( c == 0 ? 'P' : 'p');
  // Falando que é o primeiro movimento da peça
  this->first_move = true;
}

void Pawn::movePiece(int row, int col){
  // Armazenando posição antiga
  this->old_row = this->row;
  this->old_col = this->col;

  // Armazenando posição atual
  this->row = row;
  this->col = col;

  first_move = false;
}

bool Pawn::checkIsValidMovement(int row, int col, std::vector<std::vector<Piece*>>& board){
  
  // Como matriz começa no 0 aqui nos tiramos 1 de cada entranda para ficar no tamanho certo da matriz
  --row;
  --col;

  // Verificando se o movimento é válido de acordo com o tamanho do board
  if(row > MAX_BOARD || row < MIN_BOARD){
    std::cerr << "Invalid movement!\n";
    return false;
  }

  // Verificando se o peão branco está voltando uma casa
  if(this->color == 0){
    if(row < this->row){
      std::cerr << "Invalid movement!\n";
      return false;
    }

    // Verificando se é o primeiro movimento do peão branco
    if(row > (first_move ? this->row + 2 : this->row + 1)){
      std::cerr << "Invalid movement!\n";
      return false;
    }
  } else {
    // Verificando se o peão preto está voltando uma casa
    if(row > this->row){
      std::cerr << "Invalid movement!\n";
      return false;
    }

    // Verificando se é o primeiro movimento do peão preto 
    if(row < (first_move ? this->row - 2 : this->row - 1)){
      std::cerr << "Invalid movement!\n";
      return false;
    }
  }

  // Verificando se a casa a frente tem alguma peça
  if(board[row][this->col] != nullptr){
    std::cerr << "Invalid movement!\n";
    return false;
  }

  // Caso seja válido a peça vai andar 
  movePiece(row, this->col);

  return true;
}
