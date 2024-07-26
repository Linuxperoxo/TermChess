#include <iostream>

#include "board.h"

Board::Board(){
  board.resize(8, std::vector<char>(8, 'X'));
}

void Board::printBoard(){
  for(const auto& row : board){
    std::cout << "+---+---+---+---+---+---+---+---+" << '\n';
    for(const char& col : row){
      std::cout << '|' << ' ' << col << ' ';
    }
    std::cout << '|' << '\n';
  }
  std::cout << "+---+---+---+---+---+---+---+---+" << '\n';
}

void Board::put_in_board(char type, int subRow, int subCol, int newRow, int newCol){
  board[subRow][subCol] = 'X';
  board[newRow][newCol] = type;
};
