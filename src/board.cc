//==========================================|
//   FILE: board.cc                         |
//   AUTHOR: Linuxperoxo                    |
//   COPYRIGHT: (c) 2024 per Linuxperoxo.   |
//==========================================/

//==========================================================| LIBS

#include <vector>
#include <iostream>

//==========================================================| .H

#include "board.h"
#include "piece.h"

//==========================================================| CLASS FUNCTIONS

Board::Board(){
  // Criando a matriz para o board 8x8 que por padrão cada posição é um ponteiro null;
  board.resize(MAX_BOARD, std::vector<Piece*>(MAX_BOARD, nullptr));
}

Board::~Board(){
  // Passando por cada elemento e deletando tudo para liberar a memória
  for(size_t row = 0; row < MAX_BOARD; ++row){
    for(size_t col = 0; col < MAX_BOARD; ++col){
      if(board[row][col] != nullptr){
        delete board[row][col];
      }
    }
  }
  Board::printBoard();
}

void Board::putPiece(Piece* object){
  // Limpando a posição anterior da peça
  board[object->getOldRow()][object->getOldCol()] = nullptr;

  // Colocando a peça para a nova posição
  board[object->getRow()][object->getCol()] = object;
}

// Função que mostra o tabalero na sua forma atual e a posição de cada peça
void Board::printBoard(){
  // Passando por cada linha da matriz
  for(int i = MAX_BOARD - 1; i > -1; i--){
    // Mostrando a linha
    std::cout << "  +---+---+---+---+---+---+---+---+\n";
    // Mostrando a numeração da linha
    std::cout << i + 1 << ' ';
    // Passando por cada coluna da matriz
    for(int j = 0; j < MAX_BOARD; j++){
      if(board[i][j] != nullptr){
        // Caso não seja um ponteiro null vai mostrar a inicial da peça
        std::cout << '|' << ' ' << board[i][j]->getType() << ' ';
      } else {
        // Caso seja um ponteiro null vai mostrar apenas um ' '
        std::cout << '|' << ' ' << ' ' << ' ';
      }
    }
    std::cout << "|\n";
  }
  std::cout << "  +---+---+---+---+---+---+---+---+\n";
  std::cout << "    1   2   3   4   5   6   7   8\n";
}

Piece* Board::getPiece(unsigned int row, unsigned int col) const{
  // Verificando se a posição está no limite do tabuleiro
  if(row <= MAX_BOARD && row >= MIN_BOARD && col <= MAX_BOARD && col >= MIN_BOARD){
    // Retornando ponteiro do objeto
    if(board[row - 1][col - 1] != nullptr){
      return board[row - 1][col - 1];
    }
  }

  // Caso falhe 
  std::cout << "\nNo piece found at position: (" << row << ", " << col << ")\n";
  return nullptr;
}
