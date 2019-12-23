#include <SDL.h>
#include <iostream>
#include <Windows.h>



int main(int argc, char* argv[]) {
  printf("Hello, World!");
  
  SDL_Window* window = nullptr;

  SDL_Surface* screen = nullptr;

  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    printf("SDL could not init: %s", SDL_GetError());
    return -1;
  } 

 
  window = SDL_CreateWindow("RenderVooDoo", SDL_WINDOWPOS_UNDEFINED,
                            SDL_WINDOWPOS_UNDEFINED, 1024, 768,
                            SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE);

  Sleep(2000);

  printf("Goodbye, World!");

  return 0;

  
}