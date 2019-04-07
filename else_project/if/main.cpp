#include <iostream>

using namespace std;

string passWord = "password1"; // Because no one acutally uses this right?
string phrase = "silence";

int main()
{
    cout << "Please enter your password: " << flush;

    string pw;
    cin >> pw;

    if(pw == passWord) {
        cout << "Access Granted!" << endl;
    } else if(pw == phrase) {
        cout << "Hello Willie. The task force is on its way." << endl;
    } else {
        cout << "Access Denied!" << endl;
    };


    return 0;
}
