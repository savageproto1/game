

class Cube{
    public:

        Cube(int X, int Y, game* main){
            for(int Y = 0; Y < 5; Y++){
                for(int X = 0; X < 5; X ++)
                main -> gameField[0][X][Y] = 1;
            }
        }
};

class game{
    private:
      
      
       public:
             unsigned short gameField[2][screenWidth][screenHieght];

         int cube(int X, int Y){
            Cube *s = new Cube(X,Y,this );
            
           
            
         }


};

//help