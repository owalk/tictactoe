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

//myles, try and add to this function here :)
/**
   This function will take the x and y coordinates in the matrix and set a value at the specified location

 */
board::board(int x, int y, string val){

  // board [][] = ...
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
}
