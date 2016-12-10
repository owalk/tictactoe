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
     add a value at a specified location in the board matrix
     ei: Board[0][0] = val;
   */
  board(int x, int y, string val);
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
