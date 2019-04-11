#include <iostream>
#include <SDL2/SDL.h> // Thus you are connected!

using namespace std;


int main()
{

    if(SDL_Init(SDL_INIT_VIDEO) < 0){
        cout << "SDL init failed" << endl;
        return 1;
    }

    cout << "SDL init Succeeded" << endl;

    SDL_Quit();

    return 0;
}
