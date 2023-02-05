#include "Duck.hpp"
#include "Animal.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;

Duck :: Duck() :: Animal()
{
    int pattern[] = {1,2,-2};
    int size = sizeof(pattern) / sizeof(pattern[0]);
    setPatternAndLength(pattern, size);
    setName("Duck");
    setMark('D');

}

Duck :: ~Duck()
{

}

Duck :: Duck (int* pattern, int patternLength, int position, string name, char mark )
{
    setPatternLength(pattern, patternLength); setPosition(position); setName(name); setMark(mark);
}


void Duck::showExcitement() const
{
    cout << "Duck shouts quack!" << endl;

}

int Duck::getPosition() const
{
    return position;
}

void Duck::setPosition(int newPosition)
{
    this->position = newPosition;
}

int* Duck::getPattern() const
{
    return pattern;
};

int Duck::getPatternLength() const
{
    return patternLength;
};
