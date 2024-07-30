//==========================================|
//   FILE: pawn.cc                          |
//   AUTHOR: Linuxperoxo                    |
//   COPYRIGHT: (c) 2024 per Linuxperoxo.   |
//==========================================/

//==========================================================| LIBS

#include <iostream>

//==========================================================| .H

#include "piece.h"
#include "board.h"
#include "pawn.h"

//==========================================================| CLASS FUNCTIONS

Pawn::Pawn(int c, int row, int col) : Piece(c, row, col){
  // Definido a cor da peça
  this->type = ( c == 0 ? 'P' : 'p');
  // Falando que é o primeiro movimento da peça
  this->first_move = true;
}

void Pawn::movePiece(const int& row, const int& col){
  // Armazenando posição antiga
  this->old_row = this->row;
  this->old_col = this->col;

  // Armazenando posição atual
  this->row = row;
  this->col = col;

  first_move = false;
}

bool Pawn::checkIsValidMovement(int& row, int& col, const std::vector<std::vector<Piece*>>& board){

  // Verificando se o movimento é válido de acordo com o tamanho do board
  if(row > MAX_BOARD || row < MIN_BOARD || col > MAX_BOARD || col < MIN_BOARD){
    std::cerr << "Invalid movement!\n";
    return false;
  }

  // Ajustando para indexação baseada em 0
  --row;
  --col;

  // Se a cor for branco(0) a direção sempre vai ser positiva se for preta(1) negativa
  int direction = (this->color == 0 ? 1 : -1);

  // Movimento normal de 1 casa
  if(row == this->row + direction && col == this->col && board[row][col] == nullptr){
    movePiece(row, col);
    return true;
  }

  // Movimento duplo no primeiro movimento
  if(row == this->row + 2 * direction && col == this->col && first_move){
    if(board[row + direction][col] == nullptr && board[row][col] == nullptr){
      movePiece(row, col);
      return true;
    }
  }
  
  std::cerr << "Invalid movement!\n";
  return false;
}
