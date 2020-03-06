#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cassert>
#include <cstring>
#include <string>
#include <array>
#include <vector>
#include <sstream>
#include <cstdio>

using namespace std;
class Move
{
    public:
    //initializes the the name of the move
    Move(const std::string &nameOfMove, int numMove)
    {
        name = nameOfMove;
        moveNumber = numMove;
    }
    Move(const std::string &nameOfMove, const std::string &type, const int power, const int accuracy, const int pp)
    {

    }
    //turns the name of the move into a char array
    char returnAsChar(std::string name)
    {
        char charName[name.size()+1];
        strcpy(charName, name.c_str());
        
    }
    int getMoveNumber(char moveName[])
    {

        return moveNumber;
    }
    std::string getNameOfMove() const
    {
        return type;
    }
    std::string gettypeOfMove() const
    {
        return name;
    }
    private:
    std::string type;
    std::string name;
    int power, accuracy, pp; //things that make the move

    int moveNumber; //Every move has its own number


};
class Moveset
{
    public:
    Moveset(const Move &move1, Move move2, Move move3, Move move4)
    {

    }


};
