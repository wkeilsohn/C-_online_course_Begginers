#include <iostream>

using namespace std;

int val = 1;

int main()
{

    while(val < 100) {
        cout << "The value of your variable is currently "<< val << endl;
        val +=1;
    };

    do {
        cout << "The value of your variable is currently " << val << endl;
        val -=1;
    } while(val < 100 && val > 0);

    return 0;
}
