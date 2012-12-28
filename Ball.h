#ifndef BALL_H
#define BALL_H
#include <string>
#include <iostream>

class Ball
{
    public:
        Ball();
        void setColor( std::string color );
        void printFarge();
        std::string getColor();
        //virtual ~Ball();
    protected:
    private:
        std::string color;
};

#endif // BALL_H
