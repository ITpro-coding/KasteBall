#ifndef R2D290_H
#define R2D290_H
#include <string>
#include <vector>
#include "Ball.h"
#include "People.h"

class r2d290 : public People
{
    public:
        //Tar imot string-navnet til r2d290, samt en peker til minneadressen til vektoren med People.
        r2d290(std::string name, std::vector<People*> * container);

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

#endif // R2D290_H
