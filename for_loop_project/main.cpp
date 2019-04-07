#include <iostream>

using namespace std;

int i = 0;

int numArray[] = {77, 88, 99, 11, 44};

int main()
{
    for(i; i < 10; i++){
        if(i%2 == 0){
            cout << "Even" <<endl;
        } else{
            cout << "Odd" << endl;
        };
    }

    for(int j = 0; j<5; j++){
        cout << numArray[j] << endl;
    }
    return 0;
}
