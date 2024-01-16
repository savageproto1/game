#include <iostream>
#include <string>
#include <cmath>

#define screenWidth 50
#define screenHieght 20

#define spriteWidth 5
#define spriteHieght 5

#define floor screenHieght-1

typedef std::string str; 

bool char1[5][5] = {
    {1,1,1,1,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,1}
};

class renderer{
    public:

    short game_field[screenWidth][screenHieght];

    short game_objects[1][10];

    renderer(){
        for(int y = 0; y < screenHieght; y++){
            for(int x = 0; x < screenWidth; x++){
                game_field[x][y] = 0;
            }
        }
    }
    int getID(){return rand() % 1000000;}

    int newGameObject
    void drawSprite(str name, int in_X, int in_Y){
        short ID = getID();
    
        for(int Y = 0; Y < spriteHieght; Y++){
            for(int X = 0; X < spriteWidth; X++){

               if(Y == std::round(spriteHieght/2) && X == std::round(spriteWidth/2)){
                str id_str = std::to_string(ID);
                id_str = id_str[0]; 
                game_field[in_X + X][in_Y + Y] = std::stoi(id_str);
               }else(game_field[in_X + X][in_Y + Y] = char1[X][Y]);
                
            }   
        }
    }
    void moveSprite(){

    }

    void print_board(){
        for(int Y = 0; Y < screenHieght; Y++){
            for(int X = 0; X < screenWidth; X++){
                if(game_field[X][Y]==0){std::cout<<" ";}else(std::cout<<game_field[X][Y]);
            }
            std::cout<<"\n";
        }
    }
};

int main(){
renderer rend;

rend.drawSprite("hi",2,5);
rend.print_board();    
  return 0;  
}