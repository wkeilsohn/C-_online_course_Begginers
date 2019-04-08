#include <iostream>

using namespace std;

int main()
{
    int val = 8;

    int* pnValue = &val;


    cout << pnValue << endl;
    cout << *pnValue << endl;
    return 0;
}
