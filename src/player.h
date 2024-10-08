//==========================================|
//   FILE: player.h                         |
//   AUTHOR: Linuxperoxo                    |
//   COPYRIGHT: (c) 2024 per Linuxperoxo.   |
//==========================================/

#ifndef PLAYER_H
#define PLAYER_H

//==========================================================| LIBS

#include <string>

//==========================================================| .H

#include "piece.h"
#include "board.h"

//==========================================================| CLASS DEFINITION

class Player{
private:
  // Cada player vai ter uma cor de peças
  int color;

  // Buffer de entrada do player
  std::string player_buffer;

  // Ponteiro que aponta para um objeto que herda da classe Piece
  Piece* player_piece_ptr;

  // Função que verifica a cor da peça
  bool checkColor(Piece* piece);

public:
  // Construtor
  Player(int c) : color(c), player_piece_ptr(nullptr){};
  
  // Destrutor
  ~Player() = default;

  // Função para pegar o input do player
  bool getInputToMove(Board* board);
};

#endif
