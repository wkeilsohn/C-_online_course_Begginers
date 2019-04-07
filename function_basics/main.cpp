#include <iostream>

using namespace std;

int getInput() {
    cout << "Please enter an integer value: " << flush;
    int inVal;
    cin >> inVal;
    return inVal;
};

void numPrinter(int num) {
    int endVal = num * num;
    cout << endVal << endl;
};

int main()
{
    int value = getInput();
    cout << endl; // Blank line.
    numPrinter(value);
    return 0;
}
