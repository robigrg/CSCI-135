#include "hare.hpp"
#include "Animal.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;

Hare :: Hare() :: Animal()
{
    int pattern[] = {0, 0, 9, 9, -12, 1, 1, 1, -2, -2};
    int size = sizeof(pattern) / sizeof(pattern[0]);
    setPatternAndLength(pattern, size);
    setName("Hare");
    setMark('H');

}

Hare :: ~Hare()
{

}

Hare :: Hare (int* pattern, int patternLength, int position, string name, char mark )
{
    setPatternLength(pattern, patternLength); setPosition(position); setName(name); setMark(mark);
}

void Hare::showExcitement() const
{
    cout << "Hare Jumps and eats carrot!" << endl;

}

int Hare::getPosition() const
{
    return position;
}

void Hare::setPosition(int newPosition)
{
    this->position = newPosition;
}

int* Hare::getPattern() const
{
    return pattern;
};

int Hare::getPatternLength() const
{
    return patternLength;
};
