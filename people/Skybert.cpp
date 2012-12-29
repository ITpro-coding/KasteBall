#include "Skybert.h"
#include "../Ball.h"
#include <iostream>

Skybert::Skybert(std::string name, std::vector<People*> * container) :
   People(name)
{
    peopleContainer = container;
    navn = name;
}

void Skybert::action()
{
    printBalls();
    std::cout << std::endl;
    throwBall();
}


void Skybert::addBall( Ball *ball )
{
    ballContainer.push_back( ball );
}


void Skybert::throwBall()
{
    if(ballContainer.size()>2)
    {
        std::cout << name << " kaster 1 baller i trynet til totokaka, og 2 til r2d290." <<std::endl;
        peopleContainer->at(0)->addBall( ballContainer[0] ); //til r2d290
        peopleContainer->at(0)->addBall( ballContainer[1] ); //til r2d290
        peopleContainer->at(2)->addBall( ballContainer[2] ); //til totokaka
        for(int i = 0; i < 3; i++)
        {
            ballContainer.erase( ballContainer.begin() );
        }

    }
    else if(ballContainer.size()>0)
    {
        std::cout << "Skybert: zzZZZZzzZzzzZZZ" << std::endl;
    }
    else
    {
        std::cout << "Jeg har ikke noen flere baller å kaste." << std::endl;
    }
}

void Skybert::printBalls()
{
    std::cout << name << " holder " << ballContainer.size() << " baller: " << std::endl;
    for(int i = 0; i < ballContainer.size(); i++)
    {
        Ball* ball = ballContainer[i];
        std::cout << ball->getColor() << " ";
    }
    std::cout << std::endl;

}
