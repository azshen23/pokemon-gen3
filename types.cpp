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

class Type
{
    public:
    //all the types
    static constexpr const char* const TYPE_NORMAL = "Normal";
    static constexpr const char* const TYPE_FIGHT = "Fighting";
    static constexpr const char* const TYPE_FLYING = "Flying";
    static constexpr const char* const TYPE_POISON = "Poison";
    static constexpr const char* const TYPE_GROUND = "Ground";
    static constexpr const char* const TYPE_ROCK = "Rock";
    static constexpr const char* const TYPE_BUG = "Bug";
    static constexpr const char* const TYPE_GHOST = "Ghost";
    static constexpr const char* const TYPE_STEEL = "Steel";
    static constexpr const char* const TYPE_FIRE = "Fire";
    static constexpr const char* const TYPE_WATER = "Water";
    static constexpr const char* const TYPE_GRASS = "Grass";
    static constexpr const char* const TYPE_ELECTR = "Electric";
    static constexpr const char* const TYPE_PSYCHIC = "Psychic";
    static constexpr const char* const TYPE_ICE = "Ice";
    static constexpr const char* const TYPE_DRAGON = "Dragon";
    static constexpr const char* const TYPE_DARK= "Dark";
    static constexpr const char* const TYPE_FAIRY = "Fairy";

    Type(const string &typeOne)
    {
        type1 = typeOne;
    }
    Type (const string &typeOne, const string &typeTwo)
    {
        type1 = typeOne;
        type2 = typeTwo;
    }
    string getType1()
    {
        return type1;
    }
    string getType2()
    {
        return type2;
    }
    
    
    private:
    string type1;
    string type2;

};