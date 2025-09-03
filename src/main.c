#define SDL_MAIN_HANDLED   // ✅ prevents SDL redefining main
#include <stdio.h>
#include "SDL2/SDL.h"
#include "chip8.h"

int main(int argc, char const** argv){

    struct chip8 chip8;
    chip8.resistors.SP = 0;

    chip8_stack_push(&chip8, 0xbb);
    chip8_stack_push(&chip8, 0xaa);

    printf("%x\n", chip8_stack_pop(&chip8));
    printf("%x\n", chip8_stack_pop(&chip8));


    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *window = SDL_CreateWindow(
        "Chip8 Window",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        CHIP8_WIDTH * CHIP8_WINDOWS_MULTIPLIER,  CHIP8_HEIGHT * CHIP8_WINDOWS_MULTIPLIER, SDL_WINDOW_SHOWN
    );

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_TEXTUREACCESS_TARGET);
    while (1){
        SDL_Event event;
        while (SDL_PollEvent(&event)){
            if(event.type == SDL_QUIT){
                goto out;
            }
        }

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
        SDL_RenderClear(renderer);
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 0);
        SDL_Rect r;
        r.x = 0;
        r.y = 0;
        r.w = 40;
        r.h = 40;
        SDL_RenderFillRect(renderer, &r);
        SDL_RenderPresent(renderer);

    }
out:
    SDL_DestroyWindow(window);
    return 0;
}
