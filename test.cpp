#include <cmath>
#include <iostream>
#include <random>
#include <ctime>
#include "Status Effects.cpp"
using namespace std;

int main()
{
    mt19937 generator;
    generator.seed(time(0));

    cout << isFrozen(1, generator);
}