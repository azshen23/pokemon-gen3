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
    //turns the name of the move into a char array
    char* returnAsChar(std::string name)
    {
        char charName[name.size()+1];
        strcpy(charName, name.c_str());
        char* moveName = charName;
        return moveName;
    }
    //returns the number value of the move
    int getMoveNumber(char moveName[])
    {

        return moveNumber;
    }
    std::string getNameOfMove() const
    {
        return name;
    }
    void setType(std::string moveType)
    {
        type = moveType;
    }
    std::string getTypeOfMove() const
    {
        return type;
    }
    void setPower(int movePower)
    {
        power = movePower;
    }
    int getPower() const
    {
        return power;
    }
    void setAccuracy(int moveAcc)
    {
        accuracy = moveAcc;
    }
    int getAccuracy() const
    {
        return accuracy;
    }
    void setPP(int movePP)
    {
        pp = movePP;
    }
    int getPP() const
    {
        return pp;
    }

    void moveReader()
    {
        vector<Move*> moveList;
        for (int i = 0; i < 796; i++)
        {
            
        }
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
