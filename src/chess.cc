#include "board.h"
#include "pawn.h"

int main(){
  Board* board =  new Board;

  Pawn* pawn1 = new Pawn(0, 1, 0);
  Pawn* pawn2 = new Pawn(1, 1, 0);

  //  board->printBoard();

  board->placeObject(pawn1);
  board->placeObject(pawn2);
  board->printBoard();

  delete board;
}
