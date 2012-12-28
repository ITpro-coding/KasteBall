#include "totokaka.h"

totokaka::totokaka(std::string name, std::vector<People*> * container)
: People(name)
{

    //Dette er konstruktøren.
    this->name = name;
    this->peopleContainer = container;
}

void totokaka::addBall( Ball* ball )
{
    //Dette skjer når jeg får ballen
    this->ballContainer.push_back(ball);
    std::cout << this->name << " fikk ballen som er: " << ball->getColor() << std::endl;
}

void totokaka::action()
{
    std::cout << "Det er " << this->name << "s tur" << std::endl;
    if (ballContainer.size() == 0)
    {
        std::cout << this->name << " har ingen baller... \nZZZZzzzZ" << std::endl;
    }
    else
    {
        std::cout << "Her er alle ballene til " << this->name <<": " << std::endl;
        this->printBalls();
        std::cout << this->name << " kaster den første ballen til første den første personen!" << std::endl;
        throwBall();
    }
    std::cout << std::endl;
}

void totokaka::printBalls()
{
    if (this->ballContainer.size() == 0)
    {
        std::cout << this->name << " har ingen baller!" << std::endl;
    }
    else
    {
        for(int i = 0; i < this->ballContainer.size(); i++)
        {
            std::cout << "Ball " << i+1 << " har fargen: " << (ballContainer[i])->getColor() << std::endl;
        }
    }

}

void totokaka::throwBall()
{
    for(int i = 0; i < this->peopleContainer->size(); i++)
    {
        if (this->peopleContainer->at(i) != this)
        {
            this->peopleContainer->at(i)->addBall(this->ballContainer.front());
            this->ballContainer.erase(this->ballContainer.begin());
        }
    }
}
