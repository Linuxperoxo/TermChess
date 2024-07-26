#include "board.h"
#include "piece.h"

#include <iostream>

#define BOARD_SIZE 8

Board::Board() : board(BOARD_SIZE, std::vector<Piece*>(BOARD_SIZE, nullptr)){};

Board::~Board(){
  for(const auto& row : board){
    for(const auto& piece : row ){
      delete piece;
    }
  }
}

void Board::printBoard(){
  for(const auto& row : board){
    std::cout << "+---+---+---+---+---+---+---+---+" << '\n';
    for(const auto& piece : row){
      if(piece != nullptr){
        std::cout << '|' << ' ' << piece->getType() << ' ';
      } else {
        std::cout << '|' << ' ' << ' ' << ' ';
      }
    }
    std::cout << '|' << '\n';
  }
  std::cout << "+---+---+---+---+---+---+---+---+" << '\n';
}

void Board::placeObject(Piece* object){ 
  if(board[object->getRow()][object->getCol()] != nullptr){
    std::cout << "Colision piece detected" << '\n';
    delete board[object->getRow()][object->getCol()];
  }

  board[object->getRow()][object->getCol()] = object;
}
