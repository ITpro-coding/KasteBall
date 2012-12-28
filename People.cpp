#include "People.h"
#include <iostream>
using namespace std;

People::People(string x)
: name(x)
{
}

string People::getName()
{
       return name;
}

void People::setName(string myName)
{
     name = myName;
}
