#include <iostream>

//#include<windows.h>  //Denne må kanskje inkluderes for å få til sleep for windows.

#include "People.h"
#include "r2d290.h"
#include "Skybert.h"
#include "totokaka.h"
#include "Ball.h"
#include <unistd.h>

using namespace std;

int main()
{
    //Lager en vektor som kan lagre menneske-objekter
    std::vector< People* > peopleContainer;

    //Sender minneadressen for R2d290 til klassen r2d290, og det samme for Skybert
    r2d290* R2d290 = new r2d290("usr_r2d290", &peopleContainer); //Denne lager objektet R2d290 på heap
    Skybert* skybert = new Skybert("usr_skybert", &peopleContainer);
    totokaka* Totokaka = new totokaka("usr_totokaka", &peopleContainer);

    //Legger Objektet R2d290  som siste element i vektoren med mennesker.
    peopleContainer.push_back(R2d290);
    peopleContainer.push_back(skybert);
    peopleContainer.push_back(Totokaka);

    //Følgende ville ha laget 3 objekt av Baller på stack, med atributter tilsvarende deres farge.
    //Ball ball1("Svart");
    //Ball ball2("Gul");
    //Ball ball3("Hvit");

    //Lager 3 objekter av Baller på heap, med deres representative farger.
    Ball* ball1 = new Ball();
    ball1->setColor( "Rød" );
    Ball* ball2 = new Ball();
    ball2->setColor( "Blå" );
    Ball* ball3 = new Ball();
    ball3->setColor( "Grønn" );

    //Deler ut de tre ballene til noen av brukerne.
    R2d290->addBall(ball1);
    Totokaka->addBall(ball2);
    skybert->addBall(ball3);

    std::cout << R2d290->getName() << " has the " << ball1->getColor() << " ball." << std::endl;
    std::cout << Totokaka->getName() << " has the " << ball2->getColor() << " ball." << std::endl;
    std::cout << skybert->getName() << " has the " << ball3->getColor() << " ball." << std::endl;

    std::cout << "*********************************" << std::endl << std::endl;

    //Kjører leken i det uendelige, eller til noen ødelegger.
    while(1)
    {
        for(int i = 0; i < peopleContainer.size(); i++)
        {
            peopleContainer[i]->action();
            std::cout << std::endl << "---------------------------------" << std::endl << std::endl;
            usleep(1000000);
            //R2d290->action();
            //skybert->action();
        }
    }
}
