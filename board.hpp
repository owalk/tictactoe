#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
#ifndef BOARD_H
#define BOARD_H
class board {
public:
  /**
    empty board
   */
  board(void);
  /**
     @param x: if not 0, add to this value. 1-9
     @param y: if not 0, add to this value. 1-9
   */
  board(int x, int y);
  /**
     print the current state of the board
   */
  string printBoard(void);
private:
  /**
     2d vector to hold the board
   */
  vector < vector < string > > Board;
};
#endif
