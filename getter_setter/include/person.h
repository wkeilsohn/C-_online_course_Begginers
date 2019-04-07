#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;


class person
{
    public:
        person();
        string toString();
        virtual ~person();
        void setName(string id);

    protected:

    private:
        string name;

};

#endif // PERSON_H
