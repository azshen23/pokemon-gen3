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
using namespace std;
string convertToString(char *a, int size)
{
    int i;
    string s = "";
    for (i = 0; i < size; i++)
    {
        s = s + a[i];
    }
    return s;
}

int damageCalculator(int level, int power, int attack, int defense, int targets, int weather,
                     int critical, int random, int STAB, int type, int burn)
{
    int damage;
    int modifier = targets * weather * critical * random * STAB * type * burn;

    damage = ((((((2 * level) / 5) + 2) * power * (attack / defense)) / 2) + 2) * modifier;
}