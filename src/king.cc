//==========================================|
//   FILE: king.cc                          |
//   AUTHOR: Linuxperoxo                    |
//   COPYRIGHT: (c) 2024 per Linuxperoxo.   |
//==========================================/

//==========================================================| LIBS

#include <iostream>

//==========================================================| .H

#include "king.h"
#include "piece.h"

//==========================================================| CLASS FUNCTIONS

King::King(int c, unsigned int row, unsigned int col) : Piece(c, row, col){
  // Definindo a letra da peça com base na cor
  type = (c == 0 ? 'K' : 'k');
  // Falando que é o primeiro movimento de peça
  first_move = true;
}

void King::movePiece(const unsigned int& row, const unsigned int& col){
  // Armazenando posição antiga
  this->old_row = this->row;
  this->old_col = this->col;

  // Armazenando posição atual
  this->row = row;
  this->col = col;

  first_move = false;
}

bool King::checkIsValidMovement(unsigned int& row, unsigned int& col, const std::vector<std::vector<Piece*>>& board){
  
  // Ajustando para indexação baseada em 0
  --row;
  --col;

  // Movimentação do rei
  if(row == this->row + 1 || col == this->col + 1 || row == this->row - 1 || col == this->col - 1){
    // Verificando se a posição está vazia
    if(board[row][col] == nullptr){
      movePiece(row, col);
      return true;
    }

    // Verificando se a posição está sendo ocupada por uma peça da cor oposta ao rei
    if(board[row][col]->getColor() != color){
      movePiece(row, col);
      return true;
    }
  }
  std::cerr << "\nInvalid movement!\n";
  return false;
}
