#include <iostream>
#include <SDL2/SDL.h>

using namespace std;

int main()
{
    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;

    if(SDL_Init(SDL_INIT_VIDEO) < 0) {
        cout << "SDL init failed" << endl;
        return 1; // Just testing that it launched.
    };

    SDL_Window *window = SDL_CreateWindow("Window Test",
    SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT,
    SDL_WINDOW_SHOWN);

    if(window == NULL) {
        cout << "Failed to create window" << endl;
        SDL_Quit();
        return 404; // Testing that the window is made.
    }

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1,
    SDL_RENDERER_PRESENTVSYNC);
    SDL_Texture *texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ABGR8888,
    SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);

    if(renderer == NULL || texture == NULL){
        cout << "Failed to create texture/render" <<endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 2;
    }

    Uint32 *buffer = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];

    memset(buffer, 0xFF, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));

    SDL_UpdateTexture(texture, NULL, buffer, SCREEN_WIDTH * sizeof(Uint32));
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);

    bool quit = false;
    SDL_Event event;

    while(!quit) {
        while(SDL_PollEvent(&event)){
            if(event.type == SDL_QUIT){
                quit = true;
            }
        }
    }

    delete [] buffer;

    SDL_DestroyRenderer(renderer);
    SDL_DestroyTexture(texture);

    SDL_DestroyWindow(window); // Cleans up the window.
    SDL_Quit(); // Cleans up SDL.
    return 0;
}

