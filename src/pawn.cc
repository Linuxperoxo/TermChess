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

//==========================================================| CLASS FUNCTIONS

Pawn::Pawn(int c, unsigned int row, unsigned int col) : Piece(c, row, col){
  // Definindo a cor da peça
  this->type = ( c == 0 ? 'P' : 'p');
  // Falando que é o primeiro movimento da peça
  this->first_move = true;
}

void Pawn::movePiece(const unsigned int& row, const unsigned int& col){
  // Armazenando posição antiga
  this->old_row = this->row;
  this->old_col = this->col;

  // Armazenando posição atual
  this->row = row;
  this->col = col;

  first_move = false;
}

bool Pawn::checkIsValidMovement(unsigned int& row, unsigned int& col, const std::vector<std::vector<Piece*>>& board){
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

  // Movimento de captura do peão 
  if(row == this->row + direction && board[row][col] != nullptr){
    if(col == this->col + 1 || col == this->col - 1){
      movePiece(row, col);
      return true;
    }
  }
  std::cerr << "\nInvalid movement!\n";
  return false;
}
