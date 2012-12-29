#include "r2d290.h"
#include "Ball.h"
#include <iostream>

r2d290::r2d290( std::string name, std::vector<People*> * container )
: People(name)
{
    peopleContainer = container;
    navn = name;
}

void r2d290::action()
{
    printBalls();
    std::cout << std::endl;
    throwBall();
}

void r2d290::addBall( Ball *ball )
{
    ballContainer.push_back( ball );
}

void r2d290::throwBall()
{
    if( ballContainer.size()>0 )
    {
        std::cout << name << " kaster " << ballContainer[0]->getColor() << std::endl;
        peopleContainer->at(1)->addBall( ballContainer[0] );
        ballContainer.erase( ballContainer.begin() );
    }
    else
    {
        std::cout << "Jeg har ikke noen flere baller å kaste." << std::endl;
    }
}

void r2d290::printBalls()
{
    std::cout << name << " holder " << ballContainer.size() << " baller: " << std::endl;
    for( int i = 0; i < ballContainer.size(); i++ )
    {
        Ball* ball = ballContainer[i];
        std::cout << ball->getColor() << " ";
    }
    std::cout << std::endl;

}
