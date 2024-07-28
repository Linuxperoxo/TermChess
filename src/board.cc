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

//==========================================================| MACROS

#define MAX_BOARD 8

//==========================================================| CLASS FUNCTIONS

Board::Board(){
  // Criando a matriz para o board 8x8 que por padrão cada posição é um ponteiro null;
  board.resize(MAX_BOARD, std::vector<Piece*>(MAX_BOARD, nullptr));
}

Board::~Board(){
  // Passando por cada elemento e deletando tudo para liberar a memória
  for(int row = 0; row < MAX_BOARD; ++row){
    for(int col = 0; col < MAX_BOARD; ++col){
      delete board[row][col];
    }
  }
}

void Board::putPiece(Piece* object){
  // Limpando a posição anterior da peça
  board[object->getOldRow()][object->getCol()] = nullptr;

  // Colocando a peça para a nova posição
  board[object->getRow()][object->getCol()] = object;
}

void Board::printBoard(){
  int index = 0;

  // Função que mostra o tabalero na sua forma atual e a posição de cada peça 
  for(const auto& row : board){
    std::cerr << "  +---+---+---+---+---+---+---+---+\n";
    std::cerr << ++index << ' ';
    for(const auto& col : row){
      if(col != nullptr){
        // Caso não seja um ponteiro null vai mostrar a inicial da peça
        std::cerr << '|' << ' ' << col->getType() << ' ';
      } else {
        // Caso seja um ponteiro null vai mostrar apenas um ' '
        std::cerr << '|' << ' ' << ' ' << ' ';
      }
    }
    std::cerr << "|\n";
  }
  std::cerr << "  +---+---+---+---+---+---+---+---+\n";
  std::cerr << "    A   B   C   D   F   G   H   I\n";
}

Piece* Board::getPiece(int row, int col) const{
  // Verificando se a posição está no limite do tabuleiro
  if(row < MAX_BOARD && row >= 0 && col < MAX_BOARD && col >= 0){
    // Retornando ponteiro do objeto
    return board[row][col];
  }

  // Caso falhe 
  std::cerr << "Invalid ptr!" << '\n';
  return nullptr;
}
