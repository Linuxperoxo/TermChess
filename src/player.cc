//==========================================|
//   FILE: player.cc                        |
//   AUTHOR: Linuxperoxo                    |
//   COPYRIGHT: (c) 2024 per Linuxperoxo.   |
//==========================================/

//==========================================================| .H

#include "player.h"

//==========================================================| CLASS FUNCTIONS

bool Player::checkColor(Piece* object){
  // Verificando se a peça selecionada pelo player é a cor certa
  return object->getColor() == player_piece_ptr->getType();
}
