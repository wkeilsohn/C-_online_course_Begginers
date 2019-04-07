#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    Person tim;
    Person jake("Jake", 45);

    tim.toString();
    jake.toString();
    return 0;
}
