#include <iostream>

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

  int n1, n2;

  while(run){
    system("clear");

    board->printBoard();

    std::cout << "Select piece: \n";

    std::cin >> n1;
    std::cin >> n2;
    
    piece = board->getPiece(n1, n2);

    std::cout << "Move piece: \n";

    std::cin >> n1;
    std::cin >> n2;

    piece->checkIsValidMovement(n1, n2, board->getBoard());

    board->putPiece(piece);
    
  }
  return 0;
}
