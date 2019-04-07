#include "Cat.h"
#include <iostream>

using namespace std;

void Cat::speak()
{
    cout << "Meow!" << endl;
}

void Cat::pur(){
    if(happy){
        cout << "Purrrrrrr" << endl;
    } else{
        cout << "hisssssss" << endl;
    }
}

void Cat::changeMood(){
    if(happy){
        happy = false;
    } else if(happy == false) {
        happy = true;
    } else {
        happy = true;
    }
}

Cat::Cat()
{
    cout << "You made a cat." << endl;
    happy = true;
}

Cat::~Cat(){
    cout << "Cat destroyed" << endl;
}
