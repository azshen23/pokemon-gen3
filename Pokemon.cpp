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
#include "types.cpp"
#include "Stats.cpp"

class Pokemon
{
public:
    Pokemon()
    {
    }
    //if the pokemon doesn't have a nickname
    Pokemon(const std::string &name, const std::string &items, const std::string &natures,
            Moveset moves, std::string status)
    {
        nameOfPokemon = name;
        item = items;
        nature = natures;
        moveSet = moves;
    }

    //if pokemon has a nickname
    Pokemon(const std::string &nickname,
            const std::string &name, const std::string &items, const std::string &natures,
            Moveset moves, std::string status)
    {
        nickName = nickname;
        nameOfPokemon = name;
        item = items;
        nature = natures;
        moveSet = moves;
    }
    Pokemon(Pokemon poke, const Type &types, const Stats statistics)
    {
        statOfPokemon = statistics;
    }
    std::string getNickName() const
    {
        return nickName;
    }
    std::string getName() const
    {
        return nameOfPokemon;
    }
    std::string getType() const
    {
        return typeOfPokemon;
    }
    std::string getItem()
    {
        return item;
    }
    std::string getNature()
    {
        return nature;
    }
    int getHP()
    {
        return statOfPokemon.getHealth();
    }
    int getAtt()
    {
        return statOfPokemon.getAttack();
    }
    int getDef()
    {
        return statOfPokemon.getDefense();
    }
    int getSpd()
    {
        return statOfPokemon.getSpeed();
    }

private:
    std::string nameOfPokemon;
    std::string nickName;
    std::string typeOfPokemon;
    std::string item;
    std::string nature;
    Stats statOfPokemon;
    Moveset moveSet;

    int hp, attack, defense, speed;
};