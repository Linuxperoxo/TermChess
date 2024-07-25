#include <iostream>

#include "table.h"

Board::Board(){

  board.resize(8, std::vector<char>(8, 'X'));

}

void Board::print_board(){

  for(const auto& line : board){

    std::cout << "+---+---+---+---+---+---+---+---+" << '\n';

    for(const char& col : line){

      std::cout << '|' << ' ' << col << ' ';

    }

    std::cout << '|' << '\n';

  }

  std::cout << "+---+---+---+---+---+---+---+---+" << '\n';

}
