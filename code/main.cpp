#include <iostream>

#include <chrono>
#include <thread>
#include<string>
#include <vector>

#include "define.h"
#include "gameObject.cpp"

game Game;


 void delay(short time){std::this_thread::sleep_for (std::chrono::seconds(time));}

int start(){
  int prob;
  for(int Z = 0; Z <= backFrame; Z++){
    for(int Y = 0; Y <= screenHieght; Y++){
      for(int X = 0; X <= screenWidth; X++){
        Game.gameField[Z][X][Y];
      }
    }
  }
  
if(prob != 0){return -1;}else{return 1;}
}

void printBoard(){
  for(int Y = 0; Y <= screenHieght; Y++){
      for(int X = 0; X <= screenWidth; X++){
        std::cout<<Game.gameField[0][X][Y];
      }
      std::cout<<"\n";
    }
}

int main(){

  if(start() != 1){abort;}


  Game.cube(3,6);

  printBoard();

  return 0;
}