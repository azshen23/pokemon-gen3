#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cassert>
#include <cstring>
#include <string>
#include <array>
#include <vector>
#include <sstream>

class Pokemon
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

    Pokemon();

    Pokemon(const std::string &name, const std::string &item, const std::string &ability, const std::string &nature, 
            const std::string &move1, const std::string &move2, const std::string &move3, const std::string &move4);
    private:
}; 