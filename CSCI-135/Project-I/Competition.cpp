/*
#include "Competition.hpp"
#include "Animal.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

Competition::Competition()
{
    rd = new Road();
}



Competition::~Competition()
{
 //   delete[] rd;
  //  rd = NULL;
}



void Competition::addRoad(int length)
{
    rd = new Road(length);
}



void Competition::addPlayer(Animal* beast)
{
    players.push_back(beast);
}



void Competition::start()
{
    int lastBlock = rd->getLastBlock();

    int round = 1;

    for(int i=0; i<players.size(); i++)
    {
        while(players[i]->getPosition() < lastBlock)
        {
            players[i]->move();

            if(players[i]->getPosition() < 0)
            {
                players[i]->setPosition(0);
            }
            else if(players[i]->getPosition() > lastBlock)
            {
                players[i]->setPosition(lastBlock);
            }

            rd->mark(players[i]->getPosition(), players[i]->getMark());

            cout << setw(3) << round << ' ';
            cout << rd->toString() << endl;

            round++;

            rd->mark(players[i]->getPosition(), ' ');
        }
    }

    std::vector<Animal*> winners;
    for(int i =0; i <players.size(); i++)
    {
        if(players[i]->getPosition() == lastBlock)
        {
            winners.push_back(players[i]);
        }
    }
    if(winners.size() == players.size())
    {
        cout<< "It's a tie!"<<endl;
    }
    else if(winners.size() == 1)
    {
        for(int i=0; i<players.size(); i++)
        {
            if(players[i] == winners[i])
            {
                players[i]->showExcitement();
            }
        }
    }
}
*/
#include "Competition.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>

Competition::Competition()
{
    rabbit = new Hare;
    turtle = new Tortoise;
    track = new Road;
}

Competition::Competition(Hare *hare, Tortoise *tor, int length)
{
    rabbit = new Hare(hare->getPattern(), hare->getPatternLength(), hare->getPosition());
    turtle = new Tortoise(tor->getPattern(), tor->getPatternLength(), tor->getPosition());
    track = new Road(length);
}

Competition::~Competition()
{
    delete rabbit;
    rabbit = 0;
    delete turtle;
    turtle = 0;
    delete track;
    track = 0;
}

void Competition::start()
{
    int lastBlock = track-> getLastBlock();
    int round = 1;
    while(rabbit->getPosition() < lastBlock && turtle->getPosition() < lastBlock)
    {
        rabbit->move();
        if(rabbit->getPosition() < 0)
            rabbit->setPosition(0);
        else if(rabbit->getPosition() > lastBlock)
            rabbit->setPosition(lastBlock);

        turtle->move();
        if(turtle->getPosition() < 0)
            turtle->setPosition(0);
        else if(turtle->getPosition() > lastBlock)
            turtle->setPosition(lastBlock);

        track->mark(turtle->getPosition(),'T');
        track->mark(rabbit->getPosition(),'H');

        std::cout << std::setw(3) << round << " ";
        std::cout << track->toString() << std::endl;

        if(rabbit->getPosition()==turtle->getPosition())
        {
            std::cout << "Ouch, Tortoise bites Hare." << std::endl;
        }

        track->mark(turtle->getPosition(),' ');
        track->mark(rabbit->getPosition(),' ');
        round++;
    }
    if(turtle->getPosition()==rabbit->getPosition())
    {
        std::cout << "It is a tie." << std::endl;
    }else if(turtle->getPosition()==lastBlock){
        std::cout << "Yay!!! tortoise wins!" << std::endl;
    }else{
        std::cout << "Yuck, hare wins." << std::endl;
    }

}