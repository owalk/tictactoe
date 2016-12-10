#include <string>
#include <iostream>

#ifndef PLAYER_H
#define PLAYER_H
class player {
public:
  /**
     ask for player input to make a move, such as A1, B2, c1 etc...
     x and y coordinates are from ABC and 123 coordinate
   */
  makeMove(void);

  /**
     updates and then returns the hasWon variable
   */
  bool checkForWinner(void);
  
private:
  // win condition if true.
  bool hasWon;
  bool canMove;
}
#ENDIF
