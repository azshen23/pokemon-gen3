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
    for (i = 0; i < size; i ++)
    {
        s = s + a[i];
    }
    return s;
}