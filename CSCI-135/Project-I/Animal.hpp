/*
#ifndef ANIMAL_H_
#define ANIMAL_H_
#include <iostream> 
class Animal
{
public:
    Animal();
    ~Animal();
    void setPatternAndLength(int* pattern, int size);
    void setMark(char mark);
    void setName(std::string name);
    void setPosition(int position);
    int* getPattern() const;
    int getPatternLength() const;
    int getPosition() const;
    std::string getName() const;
    char getMark() const;
    void move();
    virtual void showExcitement() const;
private:
    int* pattern;
    int patternLength;
    char mark;
    std::string name;
    int position;
};
#endif
*/

#ifndef ANIMALH
#define ANIMALH
#include <iostream> //std
class Animal
{
public:
    Animal();
    ~Animal();
    void setPatternAndLength(int* pattern, int size);
    void setMark(char mark);
    void setName(std::string name);
    void setPosition(int position);
    int* getPattern() const;
    int getPatternLength() const;
    int getPosition() const;
    std::string getName() const;
    char getMark() const;
    void move();
    virtual void showExcitement() const;
private:
    int* pattern;
    int patternLength;
    char mark;
    std::string name;
    int position;
};
#endif
