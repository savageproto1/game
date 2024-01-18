



class game{

    private:

      std::vector<Cube*> cubes[10];
      
    public:
             unsigned short gameField[2][screenWidth][screenHieght];

       void cube(int X, int Y);

};

class Cube{
     game* field;
    public:
    
        Cube(int X, int Y, game* main){
            field = main;
           for(int Y = 0; Y < 2; Y++){
            for(int X = 0; X < 2; X++){
                field->gameField[0][X][Y] = 1;
            }
           }
        }
};

void game::cube(int X, int Y){
    Cube *s = new Cube(X,Y, this);
    cubes[0]=s;
}