#ifndef PEOPLE_H
#define PEOPLE_H

#include "Ball.h"
#include <string>
#include <vector>

class People
{
    public:
        People(std::string x);

        std::string getName();
        void setName(std::string x);
        std::string name;

        //Disse er pure virtual. Det betyr at alle MÅ ha en funksjon "void addBall( Ball* ball )" og en "void action()".
        virtual void addBall( Ball* ball ) = 0;
        virtual void action() = 0;


    protected:
    private:

};

#endif // PEOPLE_H
