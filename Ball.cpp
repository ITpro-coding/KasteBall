#include "Ball.h"
#include <iostream>

Ball::Ball()
{
}

void Ball::setColor( std::string col )
{
     color = col;
}

//Denne kan velges å brukes hvis ønsket. Ellers kan getColor hentes direkte
void Ball::printFarge()
{
    std::cout << "Fargen er: " << color << std::endl;
}

std::string Ball::getColor()
{
       return color;
}
