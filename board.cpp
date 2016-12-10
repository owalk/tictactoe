#include "board.hpp"

board::board(){
  //set size of board (vector of vectors)
  int width = 3, height =3;
  Board.resize(height);
  for (int i =0; i < height; i++){
    Board[i].resize(width, " ");
  }

  return;
}

/**

picture of coodinates

00|01|02
--|--|--
10|11|12
--|--|--
20|21|22

 */
board::board(int x, int y, string val){

  board[x][y] = val;
  return;
}


string board::printBoard(void){
  string s = "";
  int height =3, width = 3;

  s += "Current board is...\n";
  
  for (int i =0; i < height; i++){
    for(int j=0; j < width; j++){
      s+= Board[i][j];
      if (j < 2)
        s += "|";
      }
    s += "\n"; //add newline at each column

  }
  std::cout << s;

  return s; //return the board

