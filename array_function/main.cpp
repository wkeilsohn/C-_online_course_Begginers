#include <iostream>

using namespace std;

/* Used the Geeks for Geeks syntax and got better results.
Main difference appears to be where the * goes with relation to the variables */

string* makeArray() {
    string* arr = new string[100];

    for(int i = 0; i < sizeof(arr); i++){
        arr[i] = "Test";
    };
    return arr;
}

int main()
{
    string* testArray = makeArray();
    for(int i = 0; i < sizeof(testArray); i++){
        cout << testArray[i] << endl;
    };
    delete [] testArray; // Not sure if this is necessary, but better safe than sorry.
    return 0;
}
