#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;


class Person
{
    public:
        Person();
        Person(string name, int age);
        virtual ~Person();
        void toString();

    protected:

    private:
        string name;
        int age;
};

#endif // PERSON_H
