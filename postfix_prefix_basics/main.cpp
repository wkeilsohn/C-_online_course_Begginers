#include <iostream>

using namespace std;

int main()
{
    int value = 8;

    //value++; // This is technically a postfix b/c you add it after the variable.

    //++value; // This is the prefix b/c it goes before the variable.

    // In many cases they act the same...

    cout << value++ << endl; //But not always. Sometimes you call the variable before the postfix acts:
    cout << value << endl; // Then it acts on the value.

    cout << ++value << endl; // So if you need to add first, you prefix instead of postfix.

    return 0;
}
