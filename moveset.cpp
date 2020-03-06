#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cassert>
#include <cstring>
#include <string>
#include <array>
#include <vector>
#include <sstream>

class Move
{
    public:
    Move()
    {
        
    }
    Move(const std::string &nameOfMove, const std::string &type)
    {

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


};
class Moveset
{
    public:
    Moveset(const Move &move1, Move move2, Move move3, Move move4)
    {

    }


};
