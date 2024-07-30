#include <iostream>
#include <string>

#include "board.h"
#include "pawn.h"
#include "piece.h"

int main(){
  Board* board = new Board;

  bool run = true;

  Piece* pawn1 = new Pawn(0, 0, 0);
  Piece* pawn2 = new Pawn(1, 6, 0);

  board->putPiece(pawn1);
  board->putPiece(pawn2);
  
  Piece* piece = nullptr;

  std::string user_input;

  while(run){
    system("clear");

    board->printBoard();

    std::cout << "Select piece and move:\n";
    std::getline(std::cin, user_input);

    int piece_row = user_input[0] - '0';
    int piece_col = user_input[1] - '0';
    int move_row = user_input[2] - '0';
    int move_col = user_input[3] - '0';

    piece = board->getPiece(piece_row, piece_col);

    piece->checkIsValidMovement(move_row, move_col, board->getBoard());

    user_input.clear();

    board->putPiece(piece);
    
  }
  return 0;
}
