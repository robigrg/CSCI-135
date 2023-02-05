#include "Tortoise.hpp"
#include "Animal.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;

Tortoise :: Tortoise() ::Animal()
{
    int pattern[] = {1,2,-2};
    int size = sizeof(pattern) / sizeof(pattern[0]);
    setPatternAndLength(pattern, size);
    setName("Tortoise");
    setMark('T');

}

Tortoise :: ~Tortoise()
{

}

Tortoise :: Tortoise (int* pattern, int patternLength, int position, string name, char mark )
{
    setPatternLength(pattern, patternLength); setPosition(position); setName(name); setMark(mark);
}

void Tortoise::showExcitement() const
{
    cout << "Tortoise hides inside its shell!" << endl;

}

int Tortoise::getPosition() const
{
    return position;
}

void Tortoise::setPosition(int newPosition)
{
    this->position = newPosition;
}

int* Tortoise::getPattern() const
{
    return pattern;
};

int Tortoise::getPatternLength() const
{
    return patternLength;
};

