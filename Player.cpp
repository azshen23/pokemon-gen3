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

class Player
{
public:
    virtual int menu()
    {
    }

private:
};

class ComputerPlayer : public Player
{
};

class HumanPlayer : public Player
{
public:
    virtual int menu()
    {
        }
};