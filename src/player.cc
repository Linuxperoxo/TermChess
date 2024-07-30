//==========================================|
//   FILE: player.cc                        |
//   AUTHOR: Linuxperoxo                    |
//   COPYRIGHT: (c) 2024 per Linuxperoxo.   |
//==========================================/

//==========================================================| LIBS

#include <iostream>
#include <string>

//==========================================================| .H

#include "player.h"

//==========================================================| CLASS FUNCTIONS

bool Player::checkColor(Piece* piece){
  // Verificando se a peça selecionada pelo player é a cor certa
  return piece->getColor() == this->color;
}

bool Player::getInput(Board* board){
  std::cout << "Select piece and move to: (row, col, row, col)\n";
  std::getline(std::cin, player_buffer);

  int piece_row = player_buffer[0] - '0', piece_col = player_buffer[1] - '0', move_row = player_buffer[2] - '0', move_col = player_buffer[3] - '0';

  player_piece_ptr = board->getPiece(piece_row, piece_col);

  if(!checkColor(player_piece_ptr)){
    std::cerr << "Invalid piece color!\n";
    player_piece_ptr = nullptr;
    player_buffer.clear();
    return false;
  }

  if(!player_piece_ptr->checkIsValidMovement(move_row, move_col, board->getBoard())){
    player_buffer.clear();
    return false;
  }

  board->putPiece(player_piece_ptr);
  
  player_piece_ptr = nullptr;

  player_buffer.clear();

  return true;
}
