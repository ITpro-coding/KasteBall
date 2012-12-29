#ifndef TOTOKAKA_H
#define TOTOKAKA_H
#include <string>
#include <vector>
#include "../Ball.h"
#include "../People.h"

class totokaka : public People
{
    public:
        //Konstruktøren, tar imot et navn og peker til containeren med alle personene
        totokaka(std::string name, std::vector<People*> * container);

        //Her er de to obligatoriske funksjonene
        virtual void addBall( Ball* ball );
        virtual void action();

        //Og her er to frivillige som jeg har lagt til.
        void printBalls();
        void throwBall();

    protected:
    private:
        //Lager en container av type 'vector' som kan inneholde baller
        std::vector<Ball*> ballContainer;

        //Peker til vektor-containeren som inneholder dere brukere.
        std::vector<People*>* peopleContainer;

        std::string navn;
};

#endif // TOTOKAKA_H
