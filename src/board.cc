#include <vector>
#include <iostream>

#include "board.h"
#include "piece.h"

#define MAX_BOARD 8

Board::Board(){
  board.resize(MAX_BOARD, std::vector<Piece*>(MAX_BOARD, nullptr));
}

Board::~Board(){
  for(int row = 0; row < MAX_BOARD; ++row){
    for(int col = 0; col < MAX_BOARD; ++col){
      delete board[row][col];
    }
  }
}

Piece* Board::getPiece(int row, int col) const{
  if(row < MAX_BOARD && row >= 0 && col < MAX_BOARD && col >= 0){
    return board[row][col];
  }
  std::cerr << "Invalid ptr!" << '\n';
  return nullptr;
}
