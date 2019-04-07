#include "Person.h"
#include <sstream>
#include <iostream>

using namespace std;

Person::Person()
{
    age = 0;
    name = "";
}

Person::Person(string name, int age): name(name), age(age){
    //this->name = name;
    //this->age = age;
}

Person::~Person()
{
    stringstream death;
    death << name;
    death << " Died";
    cout << death.str() << endl;
}

void Person::toString(){
    stringstream value;
    value << "Name is: ";
    value << name;
    value << "; ";
    value << "Age is: ";
    value << age;
    cout << value.str() << endl;
}
