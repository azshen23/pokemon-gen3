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
//makes a vector of all the moves in the game and creates the objects for each move
class Move
{
public:
    //default constructor
    Move()
    {
    }
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
    char *returnAsChar(std::string name)
    {
        char charName[name.size() + 1];
        strcpy(charName, name.c_str());
        char *moveName = charName;
        return moveName;
    }
    //returns the number value of the move
    int getMoveNumber(char moveName[])
    {
        int nameLength = sizeof(moveName);
        string nameOfMove = convertToString(moveName, nameLength);
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
    //reads in all the moves [idk where to put this rn]
    void moveReader()
    {
        ifstream read("moveList.txt");
        string moveName, type;
        string pow, acc, peepee;
        int powOfMove, accOfMove, movePP;
        for (int i = 0; i < 617; i++)
        {
            getline(read, moveName);
            read >> type >> peepee >> pow >> acc;
            if (peepee != "—")
                stoi(peepee, nullptr, movePP);
            else
                movePP = -420;
            if (pow != "—")
                stoi(pow, nullptr, powOfMove);
            else
                powOfMove = -420;
            if (acc != "—")
                stoi(acc, nullptr, accOfMove);
            else
                accOfMove = -420;

            moveList.push_back(new Move(moveName, type, powOfMove, accOfMove, movePP));
        }
    }

    vector<Move *> moveList; //stores every single move
private:
    std::string type;
    std::string name;
    int power, accuracy, pp; //things that make the move
    int moveNumber;          //Every move has its own number
};

class Moveset
{
public:
    Moveset()
    {
    }
    Moveset(const Move &moves1, const Move &moves2, const Move &moves3, const Move &moves4)
    {
        move1 = moves1;
        move2 = moves2;
        move3 = moves3;
        move4 = moves4;
    }
    Move getMove1()
    {
        return move1;
    }
    Move getMove2()
    {
        return move2;
    }
    Move getMove3()
    {
        return move3;
    }
    Move getMove4()
    {
        return move4;
    }

private:
    Move move1, move2, move3, move4;
};
