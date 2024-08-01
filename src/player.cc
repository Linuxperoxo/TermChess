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
#include "board.h"

//==========================================================| CLASS FUNCTIONS

bool Player::checkColor(Piece* piece){
  // Verificando se a peça selecionada pelo player é a cor certa
  return piece->getColor() == this->color;
}

bool Player::getInputToMove(Board* board){
  std::cout << "\nSelect piece and move to: (row, col, row, col)\n";
  std::getline(std::cin, player_buffer);

  // Verificando se o tamanho é o ideal
  if(player_buffer.size() > 4 || player_buffer.size() < 4){
    std::cerr << "\nInvalid input format!\n";
    player_buffer.clear();
    return false;
  }

  // Convertendo char em int
  unsigned int piece_row = player_buffer[0] - '0'; 
  unsigned int piece_col = player_buffer[1] - '0'; 
  unsigned int move_row = player_buffer[2] - '0'; 
  unsigned int move_col = player_buffer[3] - '0';

//  if(move_row > MAX_BOARD || move_row < MIN_BOARD || move_col > MAX_BOARD || move_col < MIN_BOARD ||
//     piece_row > MAX_BOARD || piece_row < MAX_BOARD || piece_col > MAX_BOARD || piece_col < MIN_BOARD){
    
//    std::cerr << "Board limit exceeded!\n";
//    return false;
//  }

  // Apontando para a peça 
  player_piece_ptr = board->getPiece(piece_row, piece_col);

  // Verificando se está apontando para um objeto e não para um nullptr
  if(player_piece_ptr == nullptr){
    return false;
  }

  // Verificando se a peça é da cor certa
  if(!checkColor(player_piece_ptr)){
    std::cerr << "\nInvalid piece color!\n";
    player_piece_ptr = nullptr;
    player_buffer.clear();
    return false;
  }

  // Verificando se o movimento é válido
  if(!player_piece_ptr->checkIsValidMovement(move_row, move_col, board->getBoard())){
    player_buffer.clear();
    return false;
  }

  // Atualizando o tabuleiro
  board->putPiece(player_piece_ptr);
  
  // Removendo o ponteiro
  player_piece_ptr = nullptr;

  // Limpando o buffer de entrada do player
  player_buffer.clear();

  return true;
}
