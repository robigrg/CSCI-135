#ifndef COMPETITION_H_
#define COMPETITION_H_
#include "Animal.hpp"
#include <vector>
class Competition
{
public:
    Competition();
    ~Competition();
    void addRoad(int length); //add a road with those many blocks
    void addPlayer(Animal* beast);
    void start();
private:
    std::vector<Animal*> players;
    Road* rd; 
};
#endif
