#include "board.h"
#include "pawn.h"

int main(){
  Board* board = new Board;

  Pawn* pawn1 = new Pawn(0,0,0);
  Pawn* pawn2 = new Pawn(1,7,0);

  board->putPiece(pawn1);
  board->putPiece(pawn2);
  board->printBoard();
  
  pawn1->checkIsValidMovement(3, 1, board->getBoard());
  pawn2->checkIsValidMovement(7, 1, board->getBoard());
  
  board->putPiece(pawn1);
  board->putPiece(pawn2);
  board->printBoard();
  
  pawn2->checkIsValidMovement(6, 1, board->getBoard());

  board->putPiece(pawn2);
  board->printBoard();

  delete board;
  
  return 0;
}
