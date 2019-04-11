#include <iostream>

using namespace std;

int main()
{

    int color = 0x123456;

    int red = (color & 0xFF0000) >> 16;
    int green = (color & 0x00FF00) >> 8;
    int blue = (color & 0x0000FF);

    cout << hex <<  red << endl;
    cout << hex <<  green << endl;
    cout << hex <<  blue << endl;

    unsigned char redAgain = color >> 16;
    cout << hex << (int)redAgain << endl;

    return 0;
}
