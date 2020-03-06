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
#include <bits/stdc++.h>
#include "Utilities.cpp"

using namespace std;
class Move
{
    public:
    //initializes the the name of the move
    Move(const std::string &nameOfMove, const std::string &moveType, const int &movePow, 
         const int &moveAcc, const int &movePP)
    {
        
        name = nameOfMove;
        type = moveType;
        power = movePow;
        accuracy = moveAcc;
        pp = movePP;
        
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
        int nameLength = sizeof(moveName);
        string nameOfMove = convertToString(moveName,nameLength);
        for (int i = 0; i < 617; i++) //loops through the vector of moves
        {
            if (nameOfMove == moveList[i]->getNameOfMove()) //tries to find the right move
            {
                moveNumber = i + 1;
                return moveNumber; //returns the index of the move + 1 when found
            }
        }
    }
    std::string getNameOfMove() const
    {
        return name;
    }
    std::string getTypeOfMove() const
    {
        return type;
    }
    int getPower() const
    {
        return power;
    }
    int getAccuracy() const
    {
        return accuracy;
    }
    int getPP() const
    {
        return pp;
    }
    //reads in all the moves
    void moveReader()
    {
        ifstream read("moveList.txt");
        string moveName, type;
        int pow, acc, peepee;
        for (int i = 0; i < 617; i++)
        {
            getline(read, moveName);
        }
    }














    vector<Move*> moveList; //stores every single move
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
