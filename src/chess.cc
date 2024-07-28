#include "board.h"
#include "pawn.h"

int main(){
  Board* board = new Board;
  Pawn* pawn1 = new Pawn(1,1,0);

  board->putPiece(pawn1);
  board->printBoard();
  
  pawn1->checkIsValidMovement(0, board->getBoard());

  board->putPiece(pawn1);
  board->printBoard();

  return 0;
}
