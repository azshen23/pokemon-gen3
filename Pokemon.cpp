#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cassert>
#include <cstring>
#include <string>
#include <array>
#include <vector>
#include <sstream>
#include "moveset.cpp"

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
    
    //if the pokemon doesn't have a nickname
    Pokemon(const std::string &name, const std::string &item, const std::string &ability, const std::string &nature, 
            Moveset moves)
            {

            }

    //if pokemon has a nickname
    Pokemon(const std::string &nickname,
            const std::string &name, const std::string &item, const std::string &ability, const std::string &nature, 
            Moveset moves)
            {

            }

    std::string getName() const
    {
        return nameOfPokemon;
    }
    std::string getType() const
    {
        return typeOfPokemon;
    }
           
    private:
    std::string nameOfPokemon;
    std::string typeOfPokemon;
}; 