//==========================================|
//   FILE: board.h                          |
//   AUTHOR: Linuxperoxo                    |
//   COPYRIGHT: (c) 2024 per Linuxperoxo.   |
//==========================================/

#ifndef BOARD_H
#define BOARD_H

//==========================================================| LIBS

#include <vector>

//==========================================================| .H

#include "piece.h"

//==========================================================| MACROS

#define MIN_BOARD 1
#define MAX_BOARD 8

//==========================================================| CLASS DEFINITION

class Board{
private:
  // Matriz que armazena todo o tabuleiro
  std::vector<std::vector<Piece*>> board;
public:
  // Construtor da classe
  Board();
  // Destrutor da classe 
  ~Board();

  // Essa função retorna um ponteiro para um objeto que herda da classe Piece
  Piece* getPiece(int row, int col) const;
  
  // Essa função põe a peça no tabuleiro
  void putPiece(Piece* object);
  
  // Imprime o tabuleiro em sua forma atual
  void printBoard();

  // Um get para o board
  std::vector<std::vector<Piece*>> getBoard() const { return board; }
};

#endif
