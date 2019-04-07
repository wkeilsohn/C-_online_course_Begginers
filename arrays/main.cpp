#include <iostream>

using namespace std;

int array1[] = {88, 44, 55, 66, 77};

int array2[2][3] = {{1,2,3}, {4,5,6}};

int main()
{
    for(int i = 0; i<5; i++){
        cout << array1[i] << endl;
    };
    for(int j = 0; j< 2; j++){
        for(int x = 0; x < 3; x ++){
            cout << array2[j][x] << endl;
        };
    };
    return 0;
}
