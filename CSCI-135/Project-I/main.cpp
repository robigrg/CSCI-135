#include <iostream>
#include "Competition.hpp" //include Animal.h
#include "Hare.hpp" //Hare
#include "Tortoise.hpp" //Tortoise
#include "Duck.hpp" //Duck
#include "Road.hpp" //Road
using namespace std;

int main()
{
    cout << "BANG !!!" << endl;
    cout << "AND THEY ARE OFF !!!!" << endl;
    Competition game;

    Hare hare;
    game.addPlayer(&hare); 
        //IMPORTANT: use pointer for virtual method to work

    Tortoise tort;
    game.addPlayer(&tort);

    int pattern[] = {1, 2, -1, 5, 0};
    int size = sizeof(pattern) / sizeof(pattern[0]);
    Duck duck(pattern, size, 0, "Duck", 'D');
    game.addPlayer(&duck);

    game.addRoad(16);

    game.start();

    return 0;
}

