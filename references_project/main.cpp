#include <iostream>

using namespace std;

int main()
{
    int value1 = 8;
    int value2 = value1;
    int &value3 = value1;

    value2 = 10;
    value3 = 20;

    cout << value1 << " : " << value2 << " : " << value3 << endl;
    return 0;
}
