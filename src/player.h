//==========================================|
//   FILE: player.h                         |
//   AUTHOR: Linuxperoxo                    |
//   COPYRIGHT: (c) 2024 per Linuxperoxo.   |
//==========================================/

#ifndef PLAYER_H
#define PLAYER_H

//==========================================================| .H

#include "piece.h"

//==========================================================| CLASS DEFINITION

class Player{
private:
  // Cada player vai ter uma cor de peças
  char color;

  // ponteiro que aponta para uma peça
  Piece* player_piece_ptr;

public:
  // Construtor
  Player(char c) : color(c), player_piece_ptr(nullptr){};
  
  // Destrutor
  ~Player() = default;

  // Função que verifica a cor da peça
  bool checkColor(Piece* object);
};

#endif
