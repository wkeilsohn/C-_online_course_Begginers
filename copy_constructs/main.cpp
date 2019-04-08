#include <iostream>

using namespace std;


class Animal {
private:
    string name;

public:
    Animal() {cout << "Animal created" << endl;};
    Animal(const Animal& other): name(other.name) {cout << "Duplicated the animal" << endl;};
    void setName(string name) {this -> name = name;};
    void speak() const {cout << "My name is: " << name << endl;}

    ~Animal(){
        cout << "Your animal has died" << endl;
    }

};

int main()
{
    Animal animal1;

    animal1.setName("Robert");

    Animal animal2 = animal1;

    //animal2.speak();

    animal2.setName("Bob");

    animal1.speak();
    animal2.speak();

    return 0;
}
