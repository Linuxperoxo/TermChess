#include <cstdlib>

#include "player.h"
#include "board.h"
#include "pawn.h"
#include "piece.h"

int main(){
  Board* board = new Board;

  bool run = true;

  Piece* pawn1 = new Pawn(0, 4, 1);
  Piece* pawn2 = new Pawn(1, 6, 0);

  Player* playerW = new Player(0);
  Player* playerB = new Player(1);

  board->putPiece(pawn1);
  board->putPiece(pawn2);
  
  while(run){
    system("clear");

    board->printBoard();

    while(playerW->getInputToMove(board) == false);
    
    system("clear");

    board->printBoard();

    while(playerB->getInputToMove(board) == false);
    
  }

  delete playerW;
  delete playerB;
  delete board;

  return 0;
}
