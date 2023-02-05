/*
#ifndef _TORTOISE_H
#define _TORTOISE_H
#include "Animal.hpp"
class Tortoise : public Animal
{
public:
    Tortoise();
    //Tortoise(int* pattern, int length, int position);
    ~Tortoise();
    Tortoise (int* pattern, int patternLength, int position, std::string name, char mark );
    int getPosition() const;
    void setPosition(int newPosition);
    int* getPattern() const;
    int getPatternLength() const;
    void move();
    virtual void showExcitement() const;

private:
    int length;
    int* pattern;
    int position;
};
#endif
*/

#ifndef _TORTOISE_H
#define _TORTOISE_H
class Tortoise
{
public:
    Tortoise();
    Tortoise(int* pattern, int length, int position);
    ~Tortoise();

    int getPosition() const;
    void setPosition(int newPosition);
    int* getPattern() const;
    int getPatternLength() const;
    void move();

private:
    int length;
    int* pattern;
    int position;
};
#endif