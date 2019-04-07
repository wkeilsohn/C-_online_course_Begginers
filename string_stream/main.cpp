#include <iostream>
#include <sstream>

using namespace std;

string name = "Willie";
int age = 24;


int main()
{

    stringstream info;


    //string info = "Name: " + name + ";" + " age: " + age;
    info << "Name is: ";
    info << name;
    info << " ; ";
    info << "Age is: ";
    info << age;
    cout << info.str() << endl;
    return 0;
}
