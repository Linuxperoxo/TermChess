#include "pawn.h"
#include "board.h"

int main(){
  Board* board = new Board;
  Pawn* pawn = new Pawn(0, 0);

//  board->printBoard();
  pawn->move(4, 2);
  board->put_in_board(pawn->getType(), pawn->getold_row(), pawn->getold_col(), pawn->getRow(), pawn->getCol());
  board->printBoard();

  return 0;
}
