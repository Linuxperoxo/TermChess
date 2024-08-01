#include <cstdlib>

#include "player.h"
#include "board.h"
#include "pawn.h"
#include "piece.h"
#include "king.h"
#include "rook.h"

int main(){
  Board* board = new Board;

  bool run = true;

  Piece* pawn1 = new Pawn(0, 1, 3);
  
  Piece* pawn2 = new Pawn(1, 6, 3);

  Piece* kingW = new King(0, 0, 3);
  Piece* KingB = new King(1, 7, 3);

  Piece* rookW = new Rook(0, 0, 0);
  Piece* rookB = new Rook(1, 7, 7);
  
  Player* playerW = new Player(0);
  Player* playerB = new Player(1);

  board->putPiece(pawn1);
  board->putPiece(pawn2);
  board->putPiece(kingW);
  board->putPiece(rookW);
  board->putPiece(KingB);
  board->putPiece(rookB);
  
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
