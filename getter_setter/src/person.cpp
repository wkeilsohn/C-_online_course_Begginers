#include "person.h"
#include <iostream>

person::person()
{
    name = "Bill";
}

person::~person()
{
    cout << "You Died" << endl;
}

string person::toString(){
    return name;
}

void person::setName(string id){
    name = id;
}
