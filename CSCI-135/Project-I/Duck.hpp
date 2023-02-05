#ifndef DUCK_H_
#define DUCK_H_
#include "Animal.hpp"
class Duck : public Animal
{
public:
    Duck();
    //Duck(int* pattern, int length, int position);
    ~Duck();
    Duck (int* pattern, int patternLength, int position, std::string name, char mark );
    /*int getPosition() const;
    void setPosition(int newPosition);
    int* getPattern() const;
    int getPatternLength() const;
    void move();
    virtual void showExcitement() const;

private:
    int length;
    int* pattern;
    int position*/
};
#endif