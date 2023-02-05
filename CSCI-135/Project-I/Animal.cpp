#include "Animal.hpp"
#include<iostream>
#include <cstdlib>
using namespace std;

Animal::Animal(): pattern(nullptr), position(0), name(" "), mark(' ')
{

}
    
Animal::~Animal()
{
    
}


void Animal::setPosition(int position)
{
    this->position = position;
}


int* Animal::getPattern() const
{
    return pattern;
}


int Animal::getPatternLength() const
{
    return patternLength;
}


void Animal::setPatternAndLength(int* pattern, int size)
{
    this->pattern = pattern;
    patternLength = size;

}


void Animal::setMark(char mark)
{
    this->mark = mark;
}


void Animal::setName(std::string name)
{
    this->name = name;
}


int Animal::getPosition() const
{
    return position;
}


string Animal::getName() const
{
    return name;
}


char Animal::getMark() const
{
    return mark;
}


void Animal::move()
{
  int index = rand() % patternLength;
  int stepsToMove = pattern[index];
  position = position + stepsToMove;
}


void Animal:: showExcitement() const
{

}