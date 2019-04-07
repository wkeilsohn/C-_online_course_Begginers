#include <iostream>
#include "include/person.h"

using namespace std;

int main()
{

    person human1;

    cout <<"Your old name was: " << human1.toString() << endl;

    string new_Name;
    cout << "Please enter a new name: " << flush;
    cin >> new_Name;

    human1.setName(new_Name);
    cout <<"Your new name is: " << human1.toString() << endl;


    return 0;
}
