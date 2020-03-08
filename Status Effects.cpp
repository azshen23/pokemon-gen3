#include <cstdlib>
#include <cassert>
#include <cstring>
#include <string>
#include <array>
#include <vector>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <bits/stdc++.h>
#include <random>
#include "Utilities.cpp"

void burn(int &hp)
{
    hp = hp - (hp / 8);
}
bool isFrozen(int turn, mt19937 generator)
{
    uniform_int_distribution<uint32_t> dice(1, 100);
    int random = dice(generator);

    if (turn >= 5)
        return false;
    if (random > 19 && random < 31)
        return false;
    else
        return true;
}
bool paralyze(int &speed, int turn, mt19937 generator)
{
    uniform_int_distribution<uint32_t> dice(1, 100);
    int random = dice(generator);

    if (random > 19 && random < 46)
        return true;
    else
        return false;
}
bool sleep(int turn, mt19937 generator)
{
    uniform_int_distribution<uint32_t> dice(1, 100);
    int random = dice(generator);

    if (turn == 4)
        return false;
    if (random > 19 && random < 54)
        return true;
    else
        return false;
}
bool confuse(int &hp, int attack, int defense, int turn, mt19937 generator)
{
    uniform_int_distribution<uint32_t> dice(.85, 1);
    double random = dice(generator);
    hp = hp - damageCalculator(100, 40, attack, defense, 1, 1, 1, 1, 1, 1, 1);

    uniform_int_distribution<uint32_t> dice1(1, 100);
    int random1 = dice1(generator);

    if (turn == 6)
        return false;
    if (random > 19 && random < 54)
        return true;
    else
        return false;
}