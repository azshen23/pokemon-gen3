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

class Stats
{
    public:
    Stats()
    {
        
    }
    Stats(const int &health, const int &att, const int &def, const int &spd)
    {
        hp = health;
        attack = att;
        defense = def;
        speed = spd;
    }
    int getHealth()
    {
        return hp;
    }
    int getAttack()
    {
        return attack;
    }
    int getDefense()
    {
        return defense;
    }
    int getSpeed()
    {
        return speed;
    }
    private:
    int hp, attack, defense, speed;
};