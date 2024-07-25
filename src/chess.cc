#include "table.h"

int main(){

  Board* board = new Board;

  board->print_board();

  delete board;

  return 0;

}
