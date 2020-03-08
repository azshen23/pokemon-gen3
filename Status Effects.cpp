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

    if (turn == 1)
        speed = speed / 2;

    if (random > 19 && random < 46)
        return true;
    else
        return false;

    return false;
}
bool sleep(int turn, mt19937 generator)
{
    uniform_int_distribution<uint32_t> dice(1, 100);
    int random = dice(generator);

    if (turn == 3)
        return false;
    if (random > 19 && random < 54)
        return true;
    else
        return false;

    return false;
}
bool confuse(int &hp, int attack, int turn, mt19937 generator)
{
}