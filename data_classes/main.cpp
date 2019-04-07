#include <iostream>
#include "Cat.h"


using namespace std;

int main()
{
    Cat mury;
    Cat terry;

    mury.changeMood();
    mury.speak();
    mury.pur();

    terry.changeMood();
    terry.speak();
    terry.pur();


    return 0;
}
