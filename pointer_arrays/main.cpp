#include <iostream>

using namespace std;

int main()
{
    string texts[] = {"one", "two", "three", "four", "can", "I", "have", "a",
    "little", "more?"};

    string *pTexts = texts;

    int length =  sizeof(texts)/sizeof(string);

    for(int i = 0; i< length; i++){
        cout << *pTexts << " " <<flush;
        pTexts ++;
    }

    return 0;
}
