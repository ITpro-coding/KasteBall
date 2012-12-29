#ifndef SKYBERT_H
#define SKYBERT_H
#include <string>
#include <vector>
#include "../Ball.h"
#include "../People.h"

class Skybert : public People
{
    public:
        Skybert(std::string name, std::vector<People*> * container);

        //virtual void action( People* anotherDude );
        virtual void addBall( Ball* ball );
        virtual void action();
        //Legger til en ball i ballContainer

        //Kaster en ball bra en bruker til en annen




        void printBalls();
        void throwBall();

    protected:
    private:
        //Lager en container av type 'vector' som kan inneholde baller
        std::vector<Ball*> ballContainer;
        std::vector<People*>* peopleContainer;
        std::string navn;
};

#endif // R2D290_H
