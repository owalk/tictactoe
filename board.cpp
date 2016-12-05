#include "board.hpp"

board::board(){
  //set size of board (vector of vectors)
  int width = 3, height =3;
  Board.resize(height);
  for (int i =0; i < height; i++){
    Board[i].resize(width);
  }
  
  return;
}

board::board(int x, int y){

  return;
}

string board::printBoard(void){
  string s = "";

  s += "Current board is:\n -\n";

  std::cout << s;

  return s; //return the board
}
