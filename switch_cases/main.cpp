#include <iostream>

using namespace std;

int main()
{
    for(int i = 0; i <= 10; i++){
        switch(i % 2) {
        case 0:
            cout << "Even" << endl;
            continue;
        default:
            cout << "Odd" << endl;
        }
    }
    return 0;
}
