#include "piece.h"
#include "pawn.h"
#include "board.h"

Pawn::Pawn(int c, int row, int col) : Piece(c, row, col){
  this->type = ( c == 0 ? 'P' : 'p'); 
}

void Pawn::movePiece(int row, int col){
  this->old_row = this->row;
  this->old_col = this->col;

  this->row = row;
  this->col = col;
}

bool Pawn::checkIsValidMovement(int row, int col, std::vector<std::vector<Piece*>> board){

}
